//Faça um programa em C que o usuario digite 2 notas, calcule a Media desse aluno, e Exiba ? 

#include<stdio.h>
main()
{
 float  n1, n2, M;
 
  printf("digite sua primeira nota: = ");
  scanf("%f",&n1);
  printf("\ndigite sua segunda nota: = ");
  scanf("%f",&n2);
  
   M = (n1 + n2)/ 2;
   
   printf("\nsua media e = %f ",M);
}

