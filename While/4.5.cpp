//Faça um programa em C para que o usuário digite um número inteiro não negativo para obter a tabuada do número em questão. Por exemplo: 4 x 1 = 4, 4 x 2 = 8
#include<stdio.h>

main ()

{
	int i = 1, r,T;
	
	printf("\nDigite o Numero para ver a tabuada dele = "); scanf("%d",&T);
	
	while ( i <= 10)
   {
	r = T * i;
	printf("\n%d X %d = %d",T,i,r);
	i++;
   }
}
