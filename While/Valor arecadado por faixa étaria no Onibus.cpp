//Faça  um  programa  em  C  para  resolver  o  seguinte  problema:  um  ônibus  tem x lugares.  Toda  passagem  tem  um  custo  mínimo y(x e ydigitados  pelo  usuário)
//Opreço das passagens varia de acordo com a idade dos passageiros:a)
//Abaixo de 7 anos: o preço é y;b)Entre 7 e 12 anos: o preço é y acrescido de 10%;c)Acima de 12 até 17 anos: o preço é yacrescido de 20%;
//d)Acima de 17 anos: o preço é yacrescido de 30%.Mostre quanto foi arrecadado na venda de passagens no total e por faixa etária.

#include<stdio.h>

main()

{
	float Y,p;
	int X,I;
	
	printf("\nDigite quantos lugares tem no Onibus = "); scanf("%d",&X);
	printf("\nDigite o Valor Base = "); scanf("%f",&Y);
	
	int i = 1;
	
	while ( i <= X )
	{
		printf("\nDigite as idades dos passageiros = %d\t",i); scanf("%d",&I);
		i++;
		if ( I < 7 ) p = Y + p;
		 else if ( I <= 12 ) p = Y * 1.10 + p;
		  else if ( I <= 17 ) p = Y * 1.20 + p;
		   else p = Y * 1.30 + p;
	}
	printf("\nO valor arecadado = %.2f",p);
}
