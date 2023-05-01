//Faça um programa em C para obter o MDC entre dois números positivosinteiros ae b,  com b >= a. 
//Com o teorema de Euclides 

#include<stdio.h>

main()

{
	int A,B,R;
	
	do
	{
	
	printf("\nA = "); scanf("%d",&A);
	printf("\nB = "); scanf("%d",&B);
    } while( A > B );
    
    while ( A%B != 0)
    {
    	R = B % A;
    	B = A;
    	A = R;
	}
	printf("\n MDC = %d",B);
}

