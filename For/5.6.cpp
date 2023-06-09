#include<stdio.h>

main()

{
	int R,T;
	do
	{
		printf("\nDigite a um numero para ver a tabuada = "); scanf("%d",&T); 
	} while ( T < 0 );
	
	for ( int i = 0; i <= 10; i++)
	{
	    R = T * i;	
	    printf("\n%d X %d = %d",T,i,R);
	}
}
