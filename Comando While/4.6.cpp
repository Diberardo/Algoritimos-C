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
    	B = A;       //Faz primeiro a operação, depois muda o valor das variaveis para ocorer o loop, e der o resultado 
    	A = R;    
    }
	printf("\n MDC = %d",B);
}

