//Crie um programa em C que solicite ao usuário o seu Peso e o Altura,
//Em seguida, o programa deve calcular e exibir o IMC da pessoa. 
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
