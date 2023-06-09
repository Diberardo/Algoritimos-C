// Faca um Programa em C para comferrir se o número digiado pelo usuário é Par ou Impar.  
#include<stdio.h>

main()

{
	int Num;
	
	 printf("digite um numero = "); scanf("%d" ,&Num);
	   
	   if (Num%2 == 0)  printf("\nPar");
	      else printf("\nImpar");
}
