//Crie um programa em C que solicite ao usuário o seu ano de nascimento. Em seguida, o programa deve calcular e exibir a 
//idade da pessoa em Dias.

#include<stdio.h>
main()
{
	int ID, IM, IA, M,A,D;
	printf("\ndigite idade em anos = ");
	scanf("%d",&A);
	
	printf("\ndigite sua idade em messes = ");
	scanf("%d",&M);
	
	printf("\ndigite sua idade em dias = ");
	scanf("%d",&D);
	
	 IA = A * 365;
	 IM = M * 12;
	 ID = IA + IM + D;
	 
	 printf("\nSua idade em dia = %6d" , ID); 
}


