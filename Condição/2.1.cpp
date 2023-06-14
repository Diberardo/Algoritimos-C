//Faça um programa em C para calcular quanto a prefeitura de uma cidade precisa investir 
//por habitante, baseado em um valor base, digitado pelo usuário. Se a cidade tiver mais 
//de 10000 habitantes precisa investir, por cidadão, o valor base aumentado em 20%; caso 
//contrário, pode investir o valor base aumentado em 15% ???

#include<stdio.h>
main()
{
    int H; 
    float VB;
	
    printf("digite quantos Habitantes tem = ");
    scanf("%f", &H);
    printf("\ndigite o valor base = ");
    scanf("%f" ,&VB);
	
         if (H > 10000) VB = VB * 1.2;
	  else VB = VB * 1.15;
		  
     printf("\nO valor a ser investido = %2.f", VB);
 } 
