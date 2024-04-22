#include <stdio.h>
#include <malloc.h>
#include "ordena.h"
void imprime_vetor(int *a, int x)
{
	printf("\n----------------\n");
	for(int i=0; i<x; i++) printf("%d\t",a[i]);
}
void separa_vetores(int *v, int cp, int ci, int n)
{
	int i, j, k;
	int *vp = (int *) malloc (cp * sizeof(int));
	int *vi = (int *) malloc (ci * sizeof(int));
	for(i=0, j=0, k=0; i<n; i++)
	{
		if(v[i]%2==0) vp[j++]=v[i];
		else vi[k++]=v[i];
	}
	imprime_vetor(v,n); 
	bubble_sort(v,n);
	imprime_vetor(v,n);     /// da pra usar varias bibliotecas criadas atravez de outros programas 
	imprime_vetor(vp,cp); imprime_vetor(vi,ci);
}

main()
{
	int n, i, cp=0, ci=0;
	do
	{
		printf("\nTamanho do vetor = "); scanf("%d",&n);
	}while(n<2);
	int *v = (int *) malloc (n * sizeof(int));
	for(i=0; i<n; i++)
	{
		printf("\n\tDigite o valor da posicao %d = ",i);
		scanf("%d",&v[i]);
		if(i == 0 && v[i]%2 != 0) 
		{
			i--; continue;
		}
		else if(i == 1 && v[i]%2 == 0) 
			 {
				i--; continue;
			 }
		if (v[i]%2==0) cp++;
		else ci++;
	}
	separa_vetores(v,cp,ci,n); printf("\n----------------\n");
}
