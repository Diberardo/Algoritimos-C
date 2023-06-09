//Peça para o usuario digitar um número, e ver se é Negativo, Positivo ou Zero ?
#include<stdio.h>
main()

{
	int N;
	printf("digite qualquer numero = "); scanf("%d", &N);
	  if (N > 0) printf("\nNumero Inteiro");
	   else if (N == 0) printf("\nZero");
	    else printf("\nNumero negativo");
}
