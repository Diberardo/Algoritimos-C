//Fa�a um programa em C para solicitar a entrada de um n�mero positivo x. 
//Crie uma repeti��o para somar todos os n�meros �mpares de 1 at� x. Mostre o valor da soma obtida.

#include<stdio.h>

main()

{
	int i = 0,x;
	
	printf("\nDigite o intervalo para ver quais numeros sao impares  = "); scanf("%d\n",&x);
	
	while( i <= x)
	{
	 if(i % 2 != 0)
	 {
	  printf("%d\n",i);	
	 }
	 i++; 
    }
}

