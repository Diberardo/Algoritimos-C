#include<stdio.h>
main()
{
	int n,i;
	do
	{
		printf("Tamanho = "); scanf("%d",&n);
	} while ( n < 5 );
	int v[n];
	for ( i = 0; i < n; i++ )
	{
		printf("\nPosição %d = ",i); scanf("%d",&v[i]);
	}
	printf("\nVetor Diminuindo\n");
	for ( i = 0; i < n; i++ )
	{
		if ( i + 1 == n ) 
		{ 
		n -= 1; 
		i = 0; 
		printf("\n");
		} 
		printf("\t%d",v[i]);
	}
}
 // Or, ou essa maneira; vai precisar de outra variavel de controle o J

for ( i = 0; i < n; i++ )
{
	for ( j = 0; j < n; j++ )
	{
		printf("\t%d",v[j]);
	}
	printf("\n"); n -= 1;
} 
