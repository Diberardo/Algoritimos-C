#include<stdio.h>

main()

{
	int i = 10,t,r;
	
	printf("\nDigite o Numero para ver a tabuada completa dela = "); scanf("%d",&t);
	
	while( i >= 1)
	{
	r = t * i;
	printf("\n%d X %d = %d",t,i,r);
    i--;
	}
    return 0;
}
