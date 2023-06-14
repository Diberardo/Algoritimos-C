//Crie um programa em C que solicite ao usuário 2 numeros , e faça o programa  trocar as variáveris. Ex: x=10, y=11 ==> x=11, y=10;

#include<stdio.h>
main()
{
	int x, y, aux;
	
	 printf("\ndigite X = ");
	 scanf("%d",& x);
	 
	 printf("\ndigite Y = ");
	 scanf("%d", &y);
	 
	  aux = x;
	  x = y;
	  y = aux;
	  
	 printf("\nsaida de X =  %d" , x);
	 printf("\nsaida de Y =  %d" , y);  
}
