#include<stdio.h>
main()
{
	int Sq, M1,N2,N5,N10,N20,N50;
	
	printf("\nSaque"); scanf("%d",&Sq);
	
	 N50 = Sq / 50;  Sq = Sq % 50; 
	 N20 = Sq / 20;  Sq = Sq % 20;
	 N10 = Sq / 10;  Sq = Sq % 10;
	 N5 = Sq / 5;  Sq = Sq % 5;
	 N2 = Sq / 2;  Sq = Sq % 2;
	 M1 = Sq / 1;
	 
	printf("\nN50 = %d, N20 = %d, N10 = %d" , N50,N20,N10);
	printf("\nN5 = %d, N2 = %d, M1 = %d" , N5,N2,M1);  
}
