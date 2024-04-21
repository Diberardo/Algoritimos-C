#include<stdio.h>
int main()
{
	int A1, A2;
	do
	{
		printf("\nAno 1 = "); scanf("%d",&A1);
		printf("\nAno 2 = "); scanf("%d",&A2);
	} while ( A1 <= 0 || A2 <= 0) ;
	
    while( A1 <= A2 ) 
    {
    	if((A1 % 4 == 0 && A1 % 100 != 0) || (A1 % 400 == 0)) 
	  printf("%d\n",A1);
         
	A1++;
    }
}
