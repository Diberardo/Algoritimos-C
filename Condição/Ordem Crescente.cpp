#include<stdio.h>

main()

{
	int N1, N2, N3, AUX;
	
	printf("digite N1 = ");
	 scanf("%d",&N1);
	printf("\ndigite N2 = ");
	 scanf("%d",&N2);
	printf("\ndigite N3 = ");
	 scanf("%d",&N3);
	  
	   if (N1 > N2) 
	   {
	     AUX = N1;
	   	  N1 = N2;
	   	   N2 = AUX;
	   }
	   if (N2 > N3)
	   {
	   	 AUX = N2;
	   	  N2 = N3;
	   	   N3 = AUX;
	   }
	   if (N1 > N2)
	   {
	   	 AUX = N1;
	   	  N1 = N2;
	   	    N2 = AUX;
	   }
	printf("\nA ordem Crescente = %d,%d,%d",N1,N2,N3);
}
