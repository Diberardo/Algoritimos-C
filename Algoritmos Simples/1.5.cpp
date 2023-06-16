#include<stdio.h>
main()
{
	float P,A, IMC;
	
	 printf("\ndigite seu peso = ");
	 scanf("%f", &P);
	
	 printf("\ndigite sua Altura = ");
	 scanf("%f" , &A);
	 
	  IMC = P / ( A * A ); // parenteses para dar prioridade aritimetica
	   
	 printf("\nSeu IMC = %2f" , IMC);  	 
}
