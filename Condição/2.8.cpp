//Crie um programa em C que solicite ao usuário o valor do salário atual e o tempo de serviço em uma empresa (em anos). O programa 
//deve calcular e exibir o novo salário, considerando o seguinte critério de aumento:
//Se o tempo de serviço for inferior a 5 anos, o salário será aumentado em 50%.
//Se o tempo de serviço for igual ou superior a 5 anos e menor ou igual a 10 anos, o salário será aumentado em 10%.
//Se o tempo de serviço for maior que 10 anos e menor ou igual a 20 anos, o salário será aumentado em 20%.
//Se o tempo de serviço for maior que 20 anos, o salário será aumentado em 25%.

#include<stdio.h>
main()
{
	float sal, sf;
	int temp;
	
	 printf("\nSalario Atual = "); scanf("%f",&sal);
	 printf("\nTempo = "); scanf("%d",&temp);
	 
	 if (temp < 5) sf = sal * 1.5;
	  else if (temp <= 10) sf = sal * 1.10;
	   else if (temp <= 20) sf = sal * 1.20;
	    else sf = sal * 1.25;
	    
	 printf("\nO Salario final = %.2f",sf);
}
