#include<stdio.h>
#include<malloc.h>

void bubble_sort(int v[], int t)
{
    int i, j, aux;
    for (i = t - 1; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int Busca_Binaria(int p, int v[], int t)
{
    int med, ini = 0, fim = t - 1, aux = -1;

    while (ini <= fim)
    {
        med = (ini + fim) / 2;
        if (v[med] == p)
        {
            aux = med;
            break;
        }
        else if (v[med] < p)
        {
            ini = med + 1;
        }
        else
        {
            fim = med - 1;
        }
    }
    return aux;
}

int main()
{
    int t, i;
    do
    {
        printf("\nTamanho = ");
        scanf("%d", &t);
    } while (t <= 0);

    int *v = (int *)malloc(t * sizeof(int));

    for (i = 0; i < t; i++)
    {
        do
        {
            printf("Posicao %d = ", i);
            scanf("%d", &v[i]);
        } while (v[i] < 0);
    }

    bubble_sort(v, t);
    printf("\nVetor Ordenado\n\n");
    for (i = 0; i < t; i++)
        printf("%d\t", v[i]);

    int p;
    printf("\n\nDigite um Numero pra fazer a Busca no vetor = ");
    scanf("%d", &p);

    int posicao = Busca_Binaria(p, v, t);

    if (posicao != -1)
        printf("\nEsta na Posicao = %d", posicao);
    else
        printf("\nNumero nao encontrado no vetor.");

    free(v); // Liberar a memória alocada com malloc

    return 0;
}

