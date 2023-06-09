//Faça  um  programa  em  C  para  resolver  o  seguinte  problema:  um  ônibus  tem x lugares.  Toda  passagem  tem  um  custo  mínimo y(x e ydigitados  pelo  usuário)
//Opreço das passagens varia de acordo com a idade dos passageiros:a)
//Abaixo de 7 anos: o preço é y;b)Entre 7 e 12 anos: o preço é y acrescido de 10%;c)Acima de 12 até 17 anos: o preço é yacrescido de 20%;
//d)Acima de 17 anos: o preço é yacrescido de 30%.Mostre quanto foi arrecadado na venda de passagens no total e por faixa etária.

#include<stdio.h>

main()

{
	float Y,p;
	int X,I;
	float F7,F12,F17,F18;
	do 
	{
	  printf("\nDigite quantos lugares tem no Onibus = "); scanf("%d",&X);
	} while ( X <= 0 );
	
	do
	{
          printf("\nDigite o Valor Base = "); scanf("%f",&Y);
	} while ( Y <= 0 );
	
	int i = 1;
	
	while ( i <= X )
	{
		do 
		{
		printf("\nDigite as idades dos passageiros = %d\t",i); scanf("%d",&I);
		} while ( I < 0 );
		
		if ( I < 7 )
		{
			p = Y + p; F7 = F7 + p;
		}
		else if ( I <= 12 ) 
		{
			p = Y * 1.10 + p; F12 = F12 + p;
		}
		else if ( I <= 17 )
		{
			p = Y * 1.20 + p; F17 = F17 + p;
		}
		else 
		{  
			p = Y * 1.30 + p; F18 = F18 + p;
		} 
		i++;
	}
	printf("\nO valor arecadado = %.2f",p);
	printf("\nMenor 7 anos = %.2f",F7);
	printf("\nMenor 12 anos = %.2f",F12);
	printf("\nMenor 17 anos = %.2f",F17);
	printf("\nMaior que 17 = %.2f",F18);
}
