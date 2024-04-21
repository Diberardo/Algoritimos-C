#include<stdio.h>
main()
{
	int i,t,aux;
	do
	{
		printf("Tamnho = "); scanf("%d",&t);
	} while ( t < 2 );
	int v[t];
	for ( i = 0; i < t; i ++ )
	{
		printf("\nPosição %d = ",i); scanf("%d",&v[i]);
	}
	for ( i = 0; i < t/2; i++ )
	{
		aux = v[i];
		v[i] = v[ t - i - 1 ];
		v[ t - i - 1 ] = aux;
	}
	printf("\nVetor invertido\n");
	for ( i = 0; i < t; i++ )
	{
		printf("\t%d",v[i]);
	}
}
