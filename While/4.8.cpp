//Faça um programa em C para solicitar a entrada de um número positivo x. 
//Crie uma repetição para somar todos os números ímpares de 1 até x. Mostre o valor da soma obtida.

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

