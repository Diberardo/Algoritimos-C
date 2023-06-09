//Faça um programa que calcula o valor total de uma compra com base no preço de um produto e na quantidade desejada pelo usuário ?
#include<stdio.h>
main()

{
	int P ,Q, T;
	
	 printf("\ndigite valor produto = ");
	 scanf("%d",&P);
	
	 printf("\ndigite quantidade = ");
	 scanf("%d",&Q);
	
	  T = P * Q;
	  
	 printf("\no total = %d", T );
	
}
