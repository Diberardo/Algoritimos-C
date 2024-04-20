#include<stdio.h>
#include<malloc.h>
 
typedef struct dados 
{
	int chave;
	struct dados *prox;
} membro;
 
typedef struct externo
{
	struct dados *next;
} pilha;
 
membro *topo, *novo, *aux;
 
void inserePilha ( int num );
void MostraPilha ();
 
main()
{
	topo = NULL;
	inserePilha(9);
	inserePilha(3);
	inserePilha(20);
	inserePilha(8);
	mostrarPilha();
}
 
void inserePilha ( int num )
{
	novo = ( membro *) malloc ( sizeof (membro));
	novo -> chave = num; // novo.chave = num
	if ( topo == NULL ) novo -> prox = NULL; // novo.prox = null 
	else novo -> prox = topo; // novo.prox = topo
	topo = novo;
}
void MostrarPilha()
{
	aux = topo;
	while ( aux != NULL )
	{
		printf("\n%d", aux -> chave );
		printf("\n|\nv");
		aux = aux -> prox;
	}
	printf("\nNULL");
}
