#include<stdio.h>
main()
{
	float sal, sf;
	printf("digite seu salario atual = ");
	scanf("%f", &sal);
	
	 if (sal>=5000)
	 {
	 	sf = sal * 1.12;
	 }
	 else
	    sf = sal *  1.15;
	    
	printf("Seu salario com aumento = %f", sf);
}
