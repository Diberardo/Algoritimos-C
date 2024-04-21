#include<stdio.h>
main()
{
	int n,i;
	do
	{
		printf("Cidades = "); scanf("%d",&n);
	} while ( n < 2 );
	int v[n * 2 - 1]; // tem que dobrar, eu pedi as cidades e falta o km 
	do
	{
		printf("\nPosição da cidade 0 "); scanf("%d",&v[0]);
	} while ( v[0] <= 0 );
	for ( i = 2; i < n * 2 - 1; i += 2 )
	{
		do
		{
			printf("\nPosição da cidade %d = ",i); scanf("%d",&v[i]);
		} while ( v[i] <= v[i - 2] );
		v[i - 1] = v[i] - v[ i - 2 ];
	}
	for ( i = 0; i < n * 2 - 1; i++ ) // -1 porque o vetor começa em 0 tem que tirar o ultimo km 
	{
		if ( i % 2 == 0 )
		printf("\tCidade %d = %d",i,v[i]);
		if ( i%2 != 0 )
		printf(" KM = %d",v[i]);
	} 
}
