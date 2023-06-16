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
