#include<stdio.h>
 
struct poligono 

{
	int nl;
	float m;
	char nome[30];
};
 
main()

{
	struct poligono p1;
	printf("\nNumeros de lados = "); scanf("%d",&p1.m);
    printf("Medidas dos lados = "); scanf("%f",&p1.m);
	printf("\nNome = "); fflush(stdin); gets(p1.nome);
	printf("\nO perimetro de %s = %f",p1.nome,p1.m * p1.nl);
}
