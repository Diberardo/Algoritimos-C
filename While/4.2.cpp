// Faça um programa em C para solicitar a entrada de um número positivo x. Crie uma repetição para somar todos os números ímpares de 1 até x. 
//Mostre o valor da soma obtida.
#include<Stdio.h>

main()
{
	int A,B,X;
	printf("\n Numero que sera divisivel = "); scanf("%d",&X);
	printf("\n Limite A = "); scanf("%d",&A);
	printf("\n Limite B = "); scanf("%d",&B);
	                                                 // O B tem que ser o numero maior 
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
