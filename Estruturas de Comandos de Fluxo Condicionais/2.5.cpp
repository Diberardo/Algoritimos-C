#include<stdio.h>
main()
{
	float P, PF;
	int D;
	
	printf("digite o valor do produto = ");
	scanf("%f",&P);
	printf("digite o dia que voce comprou = ");
	scanf("%d",&D);
	
	 if (D<=15)
	 	PF = P * 0.92;
	 else 
	     PF = P * 0.94;
	 
	printf("O valor final do produto = %f", PF );
}
