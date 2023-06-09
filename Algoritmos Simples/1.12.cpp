// Faça um programa em que o Usuário digite lados de um retangulo e mostre o perimetro desse retangulo ?
#include<stdio.h>
main()
{
	
   float l1, l2, P;
	
	printf("digite primeiro lado do retangulo = ");
	scanf("%f",&l1);
	
	printf("\ndigite segundo lado do triangulo = ");
	scanf("%f",&l2);
	
     	P = l1*2 + l2*2;
	
	printf("\nseu perimetro do retangulo é = %f" , P);
}
