#include<stdio.h>
#include<malloc.h>

main()
{
	int t, **m;
	
	do
	{
		printf("Digite o Tamanho = ");
		scanf("%d",&t);
	} while ( t <= 0 );
	
	m = ( int ** ) malloc ( t * sizeof(int*));
	
	int i,j;
	
	for ( i = 0; i < t; i ++ )
	{
		m[i] = ( int * ) malloc ( i * sizeof(int));
	}
	
	for ( i = 0; i < t; i++ )
	{
		printf("\n");
		for ( j = 0; j < i + 1; j ++ )
		{
			m[i][j] = 0;
			printf("%d",m[i][j]);
		}
	}
}
