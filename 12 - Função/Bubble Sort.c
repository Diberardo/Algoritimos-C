#include <stdio.h>

void bubble_sort(int v[], int n)
{
    int i, j, aux;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
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

int main()
{
    int n, i;

    do
    {
        printf("\ntamanho do vetor = ");
        scanf("%d", &n);
    } while (n <= 0);

    int v[n];

    for (i = 0; i < n; i++)
    {
        printf("\nPosição %d = ", i);
        scanf("%d", &v[i]);
    }

    bubble_sort(v, n);
    printf("\nVetor Organizado: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}

