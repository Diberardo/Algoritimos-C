#include<stdio.h>

void teste_numeros (int a[], int x, int y, int c)
{
x += 10;
y += 10;
int i;

for (i = 0; i < c; i++ ) a[i] += 10;
}

main()
{

int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int x = 5;
int y = 6;
int c = 10;
int i;

teste_numeros (v, x, y, c);

printf("\n x = %d \n y = %d \n", x,y);
printf("\n");


for ( i = 0; i < c; i++ )
{
printf("%d\t",v[i]);
}
}
