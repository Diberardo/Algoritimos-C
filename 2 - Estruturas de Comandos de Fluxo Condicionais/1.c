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
