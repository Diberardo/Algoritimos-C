#include<stdio.h>

main()

{
	int a;
	do
	{
	    printf("\nA = "); scanf("%d",&a);
	} while ( a <= 0);
	int A[a],B[a],i,j;
	for ( i = 0, j = a - 1; i < a; i++,j--)
	{
		printf("\nPosição %d = ",i); scanf("%d",&A[i]);
		B[j] = A[i];
	}
	printf("\n\n");
	for ( i = 0; i < a; i++ )
	{
		printf("\nInvertido = %d",B[i]);
	}
}
