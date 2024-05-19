#include<stdio.h>
#include<malloc.h>
typedef struct temp				
{				
	int chave;			
	struct temp *prox;			
}membro;

membro *aux, *topo, *novo; // declaração de 2 ponteiros "externos"

void mostraEstrutura()
{
	aux=topo;
	int i = 1;
	while(aux!=NULL)
	{
		printf("\nElemento %d = %d",i++,aux->chave);
		aux = aux->prox; 
	}
	printf("\nNULL\n\n");
}
void insereElementos(int pos, int x)
{
	int i;
	aux = topo;
	novo = (membro*) malloc (sizeof(membro));
	novo->chave = x;
	if (pos != 1)
	{
		for (i=1; i<=pos-2; i++) //pos: posição onde será inserido o elemento
		{
			aux = aux->prox;
		}
		novo->prox = aux->prox;
		aux->prox = novo;
	}
	else
	{
		novo->prox = topo;
		topo = novo;
	}
}

void excluiElementos(int pos)
{
	aux = topo;
	if (pos==1)
	{
		topo=topo->prox; free(aux);
	}
	int i=1;
	while(i++ <= pos-2) aux=aux->prox;
	novo = aux->prox; aux->prox = novo->prox;
	free(novo);
}

main()	
{
	//EXERCÍCIO - PARTE 3
	topo = NULL;
	for(int i=1; i<=5; i++)
	{
		aux = (membro*) malloc (sizeof(membro)); 
		printf("\nDigite a chave do membro %d = ",i); 
		scanf("%d",&aux->chave);
		if (topo==NULL) aux->prox=NULL;
		else aux->prox=topo; // o próximo do aux aponta para o topo
		topo = aux;
	}
	printf("\nForam alocados os seguintes elementos:\n");
	aux = topo;
	int i = 1;
	while(aux!=NULL)
	{
		printf("\nElemento %d = %d",i++,aux->chave);
		aux = aux->prox; 
	}
	printf("\nNULL\n");
	
			
	insereElementos(4, 100);
	insereElementos(6, 99);
	insereElementos(1, 55);
	excluiElementos(3);
	printf("\n\nApos:\n1. Inserir 100 na 4a posicao;\n2.Inserir 99 na 6a posicao;\n3.Inserir 55 na 1a. posicao; e\n4.Excluir o 3o. elemento;\n\nA lista ficou assim:\n");
	mostraEstrutura();
}


