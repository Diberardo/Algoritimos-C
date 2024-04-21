#include<stdio.h>
main ()
{
	int i = 1, r,T;
	do
	{
	 printf("\nDigite o Numero para ver a tabuada dele = "); scanf("%d",&T);
	} while ( t < 0 ); 
	// ter uma consitencia de dados == o dado tem que ser > ou = 0; senao ele recusa; e pede novamente; 
	while ( i <= 10)
        {
		r = T * i;
		printf("\n%d X %d = %d",T,i,r);
		i++; // ou i = i + 1; ou i += 1;
         }
}
