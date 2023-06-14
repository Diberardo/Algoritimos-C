// Crie um programa em C que solicite ao usuário o valor de dois produtos e aplique descontos sobre esses valores. O programa deve calcular e exibir os valores dos produtos com os descontos aplicados. P1 = 8% P2 = 12%

#include<stdio.h>
main()
{
	
	float P1, P2;
	
	 printf("\ndigite o valor do primeiro produto = ");
	 scanf("%f", &P1);
	 
	 printf("\ndigite o valor do segundo produto = ");
	 scanf("%f", &P2);
	 
	  P1 = P1 * 0.92;
	  P2 = P2 * 0.88;
	  
	 printf("\nProduto 1 com desconto = %f" ,P1);
	 printf("\nProduto 2 com desconto = %f" ,P2);
}
