#include<stdio.h>
#include<math.h>

main()

{
	int i = 2,n,p;
	
	do
	{
	    printf("\nNumero = "); scanf("%d",&n);
        }while ( n < 0 );
     
    if ( n < 2 ) p = 0;           // P é um flag     0 == nao primo  // 1 == primo 
    else p = 1;                       // tem que iniciar como primo ver se é
    
    while ( i <= sqrt(n))
    {
    	 if ( n % i == 0 )
    	{
    		p = 0;
    		break;       
	}
	 else i++;
     }
	 if ( p == 1 ) printf ("\n %d e primo",n); 
	 else printf("\n %d nao e primo",n);
}
