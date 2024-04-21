#include<stdio.h>
main()
{
	int i = 10,t,r;
	do
	{
	printf("\nDigite o Numero para ver a tabuada completa dela = "); scanf("%d",&t);
	} while ( t < 0 );
	while( i >= 1)
	{
	 r = t * i;
	 printf("\n%d X %d = %d",t,i,r);
         i--; // ou i = i - 1; ou i-=1;
	}
    return 0;
}
