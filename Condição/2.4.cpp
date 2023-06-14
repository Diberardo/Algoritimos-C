// Em uma escola, um aluno pode ser reprovado se tiver mais de 25% de faltas em relação 
//às aulas dadas. Faça um programa em C para solicitar o número de aulas dadas e o 
//número de faltas do aluno e indique se ele foi aprovado ou não, bem como o percentual de faltas

#include<stdio.h>
main()
{
	float F, T;
	 
	 printf("Aulas dadas = ");scanf("%f" , &T);
	 printf("\nFaltas = "); scanf("%f" , &F);

	       if (F/T > 0.25)
	        printf("\nREPROVADO!!!");
	          else 
	           printf("\nAPROVADO!!!");
	            
	  printf("\nSua Presença = %.2f", F/T);
}
