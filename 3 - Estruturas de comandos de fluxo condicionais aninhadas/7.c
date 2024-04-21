#include<stdio.h>
main()
{
	int A,B,C;
	
	printf("\nA = "); scanf("%d",&A);
	printf("\nB = "); scanf("%d",&B);
	printf("\nC = "); scanf("%d",&C);
	
	 if (A > B && A > C) 
		 printf("\nA Maior");
	  else if (B > A && B > C ) 
		  printf("\nB Maior");
	   else 
		  printf("\nC Maior");
}
