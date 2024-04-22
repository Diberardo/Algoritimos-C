#include<stdio.h>
#include<malloc.h>
#include<string.h>
main()
{
	char *frase; int t;
	
	do
	{
		printf("\nQual o tamanho maximo da frase? = ");
		scanf("%d",&t);
	}while(t<=0);
	
	frase = (char *) malloc (t * sizeof(char));
	char *palavra = (char *) malloc ((t-1) * sizeof(char));
	
	do
	{
		printf("\nFrase = "); fflush(stdin); gets(frase);
	}while(strlen(frase)==0);
	printf("\nA frase e %s\n",frase);
	
	do
	{
		printf("\nPalavra = "); fflush(stdin); gets(palavra);
	}while(strlen(palavra)==0);
	printf("\nA palavra e %s\n",palavra);
	
	if (strstr(frase,palavra)==0) printf("\n%s nao existe em %s",palavra,frase);
	else printf("\n%s existe em %s",palavra,frase);
}
