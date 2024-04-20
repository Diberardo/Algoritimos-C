#include <stdio.h>
#include <stdlib.h>

typedef struct dados 
{
    int chave;
    struct dados *prox;
} membro;

membro *topo, *novo, *aux;

void InserirPilha(int x) 
{
    novo = (membro *)malloc(sizeof(membro));
    novo->chave = x;
    if (topo == NULL)
        novo->prox = NULL;
    else
        novo->prox = topo;
    topo = novo;
}

void RetirarPilha() 
{
    if (topo == NULL)
        return;
    aux = topo;
    topo = topo->prox;
    free(aux);
}

void MostrarPilha() 
{
    aux = topo;
    while (aux != NULL) 
	{
        printf("\n%d", aux->chave);
        printf("\n|\nv");
        aux = aux->prox;
    }
    printf("\nNULL\n");
}

main() 
{
    topo = NULL;
    int op, x;
    do {
        printf("1-) Inserir\n2-) Retirar\n3-) Mostrar\n4-) Sair\n");
        scanf("%d", &op);
        switch (op) 
		{
            case 1:
                printf("Digite o Numero = "); scanf("%d", &x);
                InserirPilha(x);
                break;
            case 2:
                RetirarPilha();
                break;
            case 3:
                MostrarPilha();
                break;
            case 4:
                break;
            default:
                printf("Operacao incorreta");
        }
    } while (op != 4);

    return 0;
}

