#include<Stdio.h>
main()
{
	int A,B,X;
	do
	{
	printf("\n Numero que sera divisivel = "); scanf("%d",&X);
	printf("\n Limite A = "); scanf("%d",&A);
	printf("\n Limite B = "); scanf("%d",&B);
	} while ( A < 0 || B <= 0 || X <= 0 );      // O B tem que ser o numero maior 
	
	printf("\n Numero que vai dividir %d limite A %d limite B %.2d:",X,A,B);
	int cont = A;
	
	while (cont <= B )
	{
		if ( cont % X == 0)
		{
			printf("%d\n",cont);
		}
		cont++;
	}
}
