#include<stdio.h>

int main()
{
    int A;
    printf("\nAno = "); scanf("%d",&A);
    if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0)) 
        printf("\nBissexto");
    else 
          printf("\nNao e bissexto");
    return 0;
}
