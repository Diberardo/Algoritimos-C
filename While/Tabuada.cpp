//Fa�a um programa em C para que o usu�rio digite um n�mero inteiro n�o negativo para obter a tabuada do n�mero em quest�o. Por exemplo: 4 x 1 = 4, 4 x 2 = 8
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
