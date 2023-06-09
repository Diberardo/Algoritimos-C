#include<stdio.h>

main()

{
	int A,B,C,r = 1;
	
		printf("\nEspoente = "); scanf("%d",&A);
		printf("\nBase  = "); scanf("%d",&B);
	  
	  C = B;
	  
	for ( int i = 1; i <= A; i++)
	{
		r = r * B;
	}
	if ( C < 0 ) printf("\nResultado 1/%d",r); 
	else printf("\nResultado = %d",r);
}
