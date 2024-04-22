#include <stdio.h>
#include <malloc.h>

void matriz(int v1[], int t);
void declara(int v1[], int t);
void ordem(int **m1, int t, int v1[]);

int main() 
{
    int t;
    do 
    {
        printf("\nDigite o tamanho do vetor = ");
        scanf("%d",&t);
    } while (t <= 0);

    int *v1 = (int *) malloc(t * sizeof(int));

    declara(v1, t);
    matriz(v1, t);
}

void declara(int v1[], int t) 
{
    int i;
    for (i = 0; i < t; i++) 
    {
        do 
        {
            printf("\nDigite um número = ");
            scanf("%d", &v1[i]);
        } while (v1[i] <= 0 || v1[i] > 9); 
    }
}

void matriz(int v1[], int t) 
{
    int i, j, **m1;
    m1 = (int **) malloc(t * sizeof(int*));

    for (i = 0; i < t; i++) 
    {
        m1[i] = (int *) malloc(v1[i] * sizeof(int)); 
        for (j = 0; j < v1[i]; j++) 
        {
            m1[i][j] = 0; 
        }
    }
    ordem(m1, t, v1);
}

void ordem(int **m1, int t, int v1[] ) 
{
    int i, j, aux = 1;
    for (i = 0; i < t; i++) 
    {
        printf("\n");
        for (j = 0; j < v1[i]; j++) 
        {
            m1[i][j] = aux;
            aux++;
            printf("[ %d ] [ %d ] = %d\n", i, j, m1[i][j]); 
        }
    }
}
