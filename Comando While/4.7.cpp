#include<stdio.h>
main()

{
	float Y,p;
	int X,I;
	float F7,F12,F17,F18;     // da pra colocar em 1 float só, mas ficaria um pouco desorganizado ( Poluído );
	do 
	{
	  printf("\nDigite quantos lugares tem no Onibus = "); scanf("%d",&X);
	  printf("\nDigite o Valor Base = "); scanf("%f",&Y);
	} while ( X <= 0 || Y <= 0 );

	int i = 1;
	
	while ( i <= X )
	{
		do 
		{
		printf("\nDigite as idades dos passageiros = %d\t",i); scanf("%d",&I);
		} while ( I < 0 );
		
		if ( I < 7 )        // da pra ultilizar um switch case tambem;
		{
			p = Y + p; 
			F7 = F7 + p;
		}
		else if ( I <= 12 ) 
		{
			p = Y * 1.10 + p; 
			F12 = F12 + p;
		}
		else if ( I <= 17 )
		{
			p = Y * 1.20 + p; 
			F17 = F17 + p;
		}
		else 
		{  
			p = Y * 1.30 + p; 
			F18 = F18 + p;
		} 
		i++;
	}
	printf("\nO valor arecadado = %.2f",p);
	printf("\nMenor 7 anos = %.2f",F7);
	printf("\nMenor 12 anos = %.2f",F12);
	printf("\nMenor 17 anos = %.2f",F17);
	printf("\nMaior que 17 = %.2f",F18);
}
