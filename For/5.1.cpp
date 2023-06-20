#include<stdio.h>
main()
{
	int A1,A2,B;
	do
	{
		printf("\nDigite o primeiro Ano = "); scanf("%d",&A1);
		printf("\nDigite o segundo Ano = "); scanf("%d",&A2);
	} while ( A1 > A2 );
	
	for( int i = A1; i <= A2; i++)
	{
		if ( i % 4 == 0) 
	    {
		  if ( i % 100 != 0) printf("\nBiscesto %d",i);
		  else if ( i % 400 == 0 ) printf("\nBiscesto %d",i);
	    }
	}
}
