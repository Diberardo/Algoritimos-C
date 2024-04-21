#include<stdio.h>
main()
{
	float  N1, N2,M;
	
	printf("\nNota1 = "); scanf("%f",&N1);
	printf("\nNota2 = "); scanf("%f",&N2);
	
	 M = (N1 + N2) / 2;
	
	if (M >= 6)
		printf("\nAprovado");
	 else if (M < 3) 
		 printf("\nReprovado");
	  else 
		 printf("\nExame");
	  
	printf("\nMedia = %.2f", M);
}
