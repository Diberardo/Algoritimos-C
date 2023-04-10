#include<stdio.h>

main()
{
	
	float sal, sf;
	
	 printf("digite seu salario atual = ");
	 scanf("%f",&sal);
	 
	  sf = sal*1.1; // da pra fazer outro jeito: ====>   aum = sal * 0.1   =>   sf= sal+aum 
	 
	 printf("\nseu salario antigo era = %f " , sal);
	 printf("\nSeu Salario com aumento é = %f", sf);
	   
	 
}


