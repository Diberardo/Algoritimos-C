#include<stdio.h>
int main()
{
	int A,B,C;
	
	printf("\nA = "); scanf("%d",&A);
	printf("\nB = "); scanf("%d",&B);
	printf("\nC = "); scanf("%d",&C);
	
	if( A >= B + C || B >= A + C || C >= A + B) 
		printf("\nNao pode ser um triangulo");
	 else if( A == B && B == C) 
		 printf("\nTriangulo Equilatero");
	  else if( A == B || A == C || C == B) 
		  printf("\nTriangulo Issoceles");
	   else 
		  printf("\nTriangulo Escaleno");
	return 0;
}
