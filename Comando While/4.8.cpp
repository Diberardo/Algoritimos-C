#include<stdio.h>
main()
{
	int i = 0,x;
	
	printf("\nDigite o intervalo para ver quais numeros sao impares  = "); scanf("%d\n",&x);
	
	while( i <= x)
	{
	  if(i % 2 != 0) printf("%d\n",i);	
          i++; 
         }
}

