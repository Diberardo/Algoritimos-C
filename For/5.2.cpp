#include<stdio.h>

main()

{
	int A,B,X;
	do
	{
		printf("\nDigite A = "); scanf("%d",&A);
		printf("\nDigite B = "); scanf("%d",&B);
		printf("\nDigite o Divisor X = "); scanf("%d",&X);
	}while ( A > B || X <= 0 ); 
	
	for (; A <= B; A++)
	{
		if ( A % X == 0 ) printf("\n%d E divisivel por %d",A,X);
	}
}

