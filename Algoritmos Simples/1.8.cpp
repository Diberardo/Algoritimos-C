//Crie um programa em C que solicite ao usuário três notas e calcule a média ponderada dessas notas.

#include<stdio.h>
main()
{
	float N1, N2, N3, M;
	
	 printf("digite sua primeira nota = ");
	 scanf("%f", &N1);
	 
	 printf("digite sua segunda nota = ");
	 scanf("%f", &N2);
	 
	 printf("digite sua terceira nota = ");
	 scanf("%f", &N3);
	 
	  M = (N1 * 0.2) + (N2 * 0.35) + (N3 * 0.45);
	 
	 printf("Sua media ponderada = %3f" , M);	 
}
