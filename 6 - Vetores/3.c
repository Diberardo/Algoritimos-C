#include<stdio.h>
main()
{
	int i,j,menor,maior,k,n;
	
	do
	{
		printf("digite o tamanho do vetor = "); scanf("%d",&n);
	} while ( n <= 0 );
	int v1[n],v2[n];
	
	for ( i = 0; i < n; i++ )
	{
		printf("\nPosiçoes %d = ",i); scanf("%d",&v1[i]);
		if ( i == 0 ) maior = v1[0];
		else if ( v1[i] > maior ) maior = v1[i];
	}
	menor = maior;
	for ( i = 0; i < n; i++ )
	{
	    for ( j = 0; j < n; j++ )
		{
		    if ( v1[j] < menor ) { menor = v1[j]; k = j; }	  	
		}
		v2[i] = menor; v1[k] = maior; menor = maior;   	
    } 
    printf("\nVetor ordenado");
    for ( i = 0; i < n; i++ ) printf("\t%d",v2[i]);
}
