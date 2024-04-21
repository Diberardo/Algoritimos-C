#include<stdio.h>
main ()
{
	const float A = 80.0;
	float N1,N2,M,FQ,F;
	
	printf("\nN1 = "); scanf("%f",&N1);
	printf("\nN2 = "); scanf("%f",&N2);
	printf("\nFaltas "); scanf("%f",&F);
	
	M = (N1 + N2)/2;
	FQ = 1-F/A;
	
	if(M > 6 && FQ > 0.75) 
		printf("\nAprovado");
	 else if (M < 3 || FQ < 0.75) 
		 printf("\nReprovado");
	  else 
		 printf("\nExame");
	  
	printf("\nMedia = %.2f",M);
	printf("\nFrequencia = %.2f",FQ);	
	return 0;
}
