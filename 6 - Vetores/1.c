#include<stdio.h>
main()
{
	float sal[100],x,m = 0;
	int i;
	
	for ( i = 0; i < 100; i++)
	{
		printf("\nDigite os Salario %d = ",i); scanf("%f",&sal[i]);
		m = m + sal[i];
	}
	m = m / 100 ; 
	
	if ( m >= 5000) x = 1.12;
	else x = 1.15;
	
	printf("\nMedia do Salario antes do reajuste = %.2f",m);
	
	m = 0;    // tem que zerar para ver nova média; 
	
	for ( i = 0; i < 100; i++)
	{
		sal[i] = sal[i] * x;
		printf("\nSalario reajustado %d = %.2f",i,sal[i]);
		m = m + sal[i];
	}
    printf("\nMedia depois do reajuste = %.2f",m);
}
