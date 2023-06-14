//Escreva um programa em C que leia uma idade de uma pessoa e verifique se ela é maior de idade ou não. 
//Considere a idade mínima para ser maior de idade como 18 anos.

#include<stdio.h>
main()
{
	int ID;
	
	 printf("digite sua idade = "); scanf("%d",&ID);
	  if (ID < 18) printf("\nMENOR DE IDADE!!!");
	   else printf("\nMAIOR DE IDADE!!!");
}
