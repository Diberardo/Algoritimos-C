#include<stdio.h>

main()

{
	int X,R;
	
	do 
	{
		printf("\nDigite o numero Maximo = "); scanf("%d",&X);
	} while ( X < 0 ); 
	for ( int i = 1; i <= X; i++ )
	{
		if ( i % 2 != 0) R = R + i;
	}
	   printf("\nO Resultado = %d",R);
}
