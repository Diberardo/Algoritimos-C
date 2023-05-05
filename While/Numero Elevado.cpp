
//Faça um programa em C para mostrar o valor de ab, sendo ae bnúmeros inteiros. 
//Não  deve  ser  usada  a  função pow()da  biblioteca math.h.  Lembre-se  que,  por exemplo, 2^5= 2. 2. 2. 2. 2
#include<stdio.h>

main()

{
	int e,b,r,c;
	
	printf("\nDigite a base = "); scanf("%d",&b);
	printf("\nDigite o elevado = "); scanf("%d",&e);
	
	c = b;
	
	if ( b < 0 ) b = b * ( -1 );
	
	int i = 1;
	r = 1;
	
	while ( i <= e )
	{
		r = r * b;
		i++;
	}
	if ( c < 0 ) printf("\nO Resultado = 1/%d",r);
	else printf("\nO resultado = %d",r);
	
}
