// Faça um programa em C para solicitar que o usuário digite dois anos, a1e a2(com a2 > a1; porexemplo, 1970 e 2010). 
//Mostre quais são os anos bissextos existentes nesse intervalo, considerando a1 e a2
#include<stdio.h>

int main()

{
	int A1, A2;
	
	printf("\nAno 1 = "); scanf("%d",&A1);
	printf("\nAno 2 = "); scanf("%d",&A2);
	
	
    while( A1 <= A2 ) 
    {
    	if((A1 % 4 == 0 && A1 % 100 != 0) || (A1 % 400 == 0)) 
		{
		printf("%d\n",A1);
        }   
	        A1++;
	}
}
