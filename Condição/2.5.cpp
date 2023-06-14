//Um produto tem um desconto sobre seu preço, considerando o dia do mês em 
//que foi comprado: se for na primeira quinzena, o desconto é de 8%; se for na 
//segunda quinzena, o desconto é de 6%. Mostre o preço do produto com desconto.

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
