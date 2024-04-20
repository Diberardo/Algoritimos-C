#include<stdio.h>
#include<malloc.h>

typedef struct dados
{
	int chave;
	struct dados *prox;
} membro;

membro *inicio, *fim, *novo, *aux;

void InserirFila ( int x )
{
	novo = (membro*) malloc (sizeof(membro));
	novo -> prox = NULL; 
	novo -> chave = x;
	if ( inicio == NULL ) inicio = novo;
	else fim -> prox= novo;
	fim = novo;
}

void RemoverFila()
{
	if ( inicio == NULL ) return;
	aux = inicio;
	inicio = inicio -> prox;
	free(aux);
}

void MostrarFila() 
{
    aux = inicio; 
	printf("\n");
    while (aux != NULL) 
	{
        printf("%d -> ", aux->chave);
        aux = aux->prox;
    }
    printf("NULL\n");
}

main() 
{
    inicio = NULL;
    int op, x;
    do {
        printf("1-) Inserir\n2-) Retirar\n3-) Mostrar\n4-) Sair\n");
        scanf("%d", &op);
        switch (op) 
		{
            case 1:
                printf("Digite o Numero = "); scanf("%d", &x);
                InserirFila(x);
                break;
            case 2:
                RemoverFila();
                break;
            case 3:
                MostrarFila();
                break;
            case 4:
                break;
            default:
                printf("Operacao incorreta");
        }
    } while (op != 4);

    return 0;
}
