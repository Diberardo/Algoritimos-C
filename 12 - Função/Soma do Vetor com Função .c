#include<stdio.h>

int soma (int a[] /* vetor = vet*/, int x /*tamanho = tam*/)
{
int soma = 0, i;

for (i = 0; i < x; i++)
{ 
    soma += a[i];
} 
return soma;
}

main()
{
int tam;

do
{
printf("digite o tamanho do vetor = ");
scanf("%d",&tam);
} while (tam <= 0);

int vet[tam], i;

for (i = 0; i < tam; i++)
{
printf("Digite os valores %d = ", i);
scanf("%d",&vet[i]);
}

printf("Soma do Vetor = %d",soma(vet,tam));

}
