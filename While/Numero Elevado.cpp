
//Faça um programa em C para mostrar o valor de ab, sendo ae bnúmeros inteiros. 
//Não  deve  ser  usada  a  função pow()da  biblioteca math.h.  Lembre-se  que,  por exemplo, 2^5= 2. 2. 2. 2. 2
#include<stdio.h>

main()

{
	int a,b,r,c;
	
	printf("\nDigite a base = "); scanf("%d",&a);
	printf("\nDigite o elevado = "); scanf("%d",&b);
	
	c = b;
	
	if ( b < 0 ) b = b * ( -1 );
	
	int i = 1;
	r = 1;
	
	while ( i <= b )
	{
		r = r * a;
		i++;
	}
	if ( c < 0 ) printf("\nO Resultado = 1/%d",r);
	else printf("\nO resultado = %d",r);
	
}
