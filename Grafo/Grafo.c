#include <stdio.h>
#include <malloc.h>

void mostraMatriz ( int** m, int v );
void zeraMatriz( int** m, int v );
void mostraGrau( int** m, int v );
void Tipo_de_Grafo ( int *grau, int v );

main ()
{
	int v, v1, v2;
	do
	{
		printf("\n Quantos vertices no grafo ? = ");
		scanf("%d", &v);
	} while (v <=0);
	
	int** m = (int**) malloc (v * sizeof (int*));
	/*
    alocação da linhas da matriz m, que armazena o grafo: a matris v linhas ( v = n vertices )
    */
	int i;
	
	for ( i = 0; i < v; i++ )
	{
		m[i] = (int*) malloc ((i+1) * sizeof (int));
	}
	zeraMatriz( m, v ); 
	char cont; i = 1; 
	
	do
	{
		do
		{
			printf("\n Aresta %d: ", i++);
			printf("\n\t Primeiro vertice: "); scanf("%d", &v1);
			printf("\n\t Segundo vertice: "); scanf("%d", &v2);
		} while (v1 < 0 || v2 < 0 || v1 >= v || v2 >= v );
		 
		if (v1 >= v2) m[v1][v2]++;
		else m[v2][v1]++;
		
		printf("\nContinua? (Digite 'S' para continuar) = ");
		fflush(stdin); 
		cont = getchar();
	} while (cont == 'S' || cont == 's');
	
	mostraMatriz(m, v);
	fflush (stdin); 
	getchar();
	mostraGrau(m, v);
}
void mostraMatriz (int **m, int v)
{
	int i, j;
	for (i=0; i<v; i++)
	{
		printf("\n");
		for( j = 0; j < i + 1; j++ )
		{
			printf("%d\t", m[i][j]);
		}
	}
}
void zeraMatriz(int** m, int v)
{
	int i, j;
	for ( i = 0; i < v; i++ )
	{
		for ( j = 0; j < i + 1; j++ )
		{
			m[i][j] = 0;
		}
	}
}
void mostraGrau(int** m, int v)
{
	int a, i, j;
	int* grau = (int*) malloc (v * sizeof(int));
	printf("\nGraus dos vertices:");
	
	for ( a = 0; a < v; a++ )
	{
		grau[a] = 0;
		for ( i = 0; i < v; i++ )
		{
			for ( j = 0; j < i + 1; j++ )
			{
				if (i==a || j==a)
				{
					grau[a]+=m[i][j];
				}		
			}
		}
    }
    Tipo_de_Grafo ( grau, v );
}
void Tipo_de_Grafo ( int *grau, int v )
{ 
    int i,contImp;
    for ( i = 0; i < v; i++ )
    {
    	if ( grau[i]%2 != 0) contImp++;
	    printf("\nVertice %d: %d", i, grau[i]);
	}
	printf("\n");
	if (contImp==0) printf("\n\tO grafo e Eureliano, pois todos os seus vertices possuem grau par.");
	else if (contImp==2) printf("\n\tO grafo e Semieureliano, pois exatamente dois de seus vertices sao de grau impar.");
	else printf("\n\tO grafo e comum, pois possui mais de dois vertices com grau impar.");
}
    
