//Um funcionário recebe um salário mensal, que deve ter 15% de desconto e um 
//acréscimo de 100 reais. Exibir o salário final após os cálculos.
#include<stdio.h>
main()

{
	float sal, sf , des;
	
	 printf("\ndigite seu salario atual = ");
	 scanf("%f" , &sal);
	
	  des = sal * 0.15;
	  sf = sal - des + 100;
	  
	  
	 printf("\nSeu salário com desconto = %f" , sf); 
}
