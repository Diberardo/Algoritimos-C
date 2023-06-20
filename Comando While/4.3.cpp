#include<stdio.h>
main()
{
	int e,b,r,c;
	
	printf("\nDigite a base = "); scanf("%d",&b);
	printf("\nDigite o elevado = "); scanf("%d",&e);
	
	c = b; // guardar para ver se o numero é negativo;
	
	if ( b < 0 ) b = b * ( -1 ); // transformar em positivo., perde o valor se for negativo
	
	int i = 1;
	r = 1;
	
	while ( i <= e )
	{
		r = r * b;
		i++;
	}
	if ( c < 0 ) printf("\nO Resultado = 1/%d",r); // se o numero digitado for negativo aparece 1/resultado; 
	else printf("\nO resultado = %d",r); 
	
}
