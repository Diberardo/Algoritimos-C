#include<stdio.h>
#include<malloc.h>
 
struct poligono 
{
	int nl;
	float m;
	char nome[30];
};
main()
{
	int n,i;
	do
	{
		printf("\nQuantos Poligonos? = ");
		scanf("%d",&n);
	} while ( n <= 0 );
	struct poligono *p = ( struct poligono *) malloc ( n * sizeof ( struct poligono));
	for ( i = 0; i < n; i++ )
	{
		printf("\nPoligono n.%d:", i + 1);
		printf("\n\tnome = "); fflush(stdin); gets(p[i].nome);
		printf("\n\tLados = "); scanf("%d",&p[i].nl);
		printf("\n\tMedidas = "); scanf("%f",&p[i].m);
		printf("\n\tPerimetro = %f ", p[i].m * p[i].nl);
		printf("\n");
	}
}
