#include<stdio.h>
#include<malloc.h>
typedef struct temp				
{				
	int chave;			
	struct temp *prox;			
}membro;

membro *aux, *topo, *topo2, *novo; // declaração de 2 ponteiros "externos"

main()	
{
	//EXERCÍCIO - PARTE 1
	topo = NULL;
	int i, pos, x;
	for(i=1; i<=5; i++)
	{
		aux = (membro*) malloc (sizeof(membro)); 
		printf("\nDigite a chave do membro %d da pilha1= ",i); 
		scanf("%d",&aux->chave);
		if (topo==NULL) aux->prox=NULL;
		else aux->prox=topo; // o próximo do aux aponta para o topo
		topo = aux;
	}
	printf("\nForam alocados os seguintes elementos na pilha1:\n");
	aux = topo;
	for(i=1; i<=5; i++)
	{
		printf("\nElemento %d = %d",i,aux->chave);
		aux = aux->prox;
	}
	printf("\nNULL\n");
	
	for (i=1; i<=2; i++)
		{
			if (topo != NULL)
			{
				aux = topo;
				topo = topo->prox;
				free(aux);	
			}
			else
			{
				break;
			}
		}
		
	printf("\n Apos a retirada de 2 elementos, a pilha1 ficou assim: "); // Não foi solicitado no exercício. Apenas para conferência
	aux = topo;
	for (i=1; i<=3; i++)
	{
		printf("\nElemento %d = %d", i, aux->chave);
		aux = aux->prox;
	}
	printf("\nNULL\n");
	
	//EXERCÍCIO - PARTE 2
	
	for(i=1; i<=5; i++)
	{
		aux = (membro*) malloc (sizeof(membro)); 
		printf("\nDigite a chave do membro %d da pilha2 = ",i); 
		scanf("%d",&aux->chave);
		if (topo2==NULL) aux->prox=NULL;
		else aux->prox=topo2; // o próximo do aux aponta para o topo2
		topo2 = aux;
	}
	
	printf("\nForam alocados os seguintes elementos na pilha2:\n");
	aux = topo2;
	for(i=1; i<=5; i++)
	{
		printf("\nElemento %d = %d",i,aux->chave);
		aux = aux->prox;
	}
	printf("\nNULL\n");
	
	for(i=1; i<=5; i++)
	{
		aux = (membro*) malloc (sizeof(membro)); 
		aux = topo2;
		topo2 = topo2->prox;
		aux->prox=topo;
		topo = aux;
	}
	
	printf("\nApos juntar as pilhas, a estrutura ficou assim:\n");
	aux = topo;
	for(i=1; i<=8; i++)
	{
		printf("\nElemento %d = %d",i,aux->chave);
		aux = aux->prox;
	}
	printf("\nNULL\n");
}


