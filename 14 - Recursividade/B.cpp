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
        printf("\nDigite o N�mero que voc� quer ver a sequ�ncia:");
        scanf("%d", &n);
    } while (n < 0);

    printf("Sequ�ncia de Fibonacci at� o %d-�simo termo:\n", n);
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", Fib(i));
    }
    printf("\n");

    return 0;
}

