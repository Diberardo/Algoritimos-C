#include <stdio.h>

int Fib(int n) {
    if (n <= 1) return n;
    else return (Fib(n - 1) + Fib(n - 2));
}

int main() 
{
    int n;
    do 
	{
        printf("\nDigite o Número que você quer ver a sequência:");
        scanf("%d", &n);
    } while (n < 0);

    printf("Sequência de Fibonacci até o %d-ésimo termo:\n", n);
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", Fib(i));
    }
    printf("\n");

    return 0;
}

