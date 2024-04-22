#include<stdio.h>
#include<malloc.h>
 
typedef struct dados // typedef: A claúsula é um comando que permite definir tipos de dados abstratos 
{
	int cod, qtda;
	float preco;
	int qv[5];
} produto; // nome do tipo de dados abstratos
 
main()
{
	produto p [5];
	int total = 0,i,j;
	for  ( i = 0; i < 5; i++ )
	{
		printf ("\n\tProdutos %d: ", i + 1 );
		printf("\n\tCodigo = "); scanf("%d", &p[i].cod);
		printf("\n\tQqtde = "); scanf("%d",&p[i].qtda);
		printf("\n\tPreco = "); scanf("%f",&p[i].preco);
		for ( j = 0; j < 5; j++ )
		{
			printf("\n\t\tQtde %d = ",j); scanf("%d",&p[i].qv[j]);
			total += p[i].qv[j];
		}
		printf("\n\tVendas = %.2f", p[i].preco * total);
	}
}
