#include<stdio.h>
#include<math.h>
main()
{
	int i = 2,n,p,m;
	
     do 
    {
      printf("\nNumero minimo = "); scanf("%d",&n);
      printf("\nNumero maxino = "); scanf("%d",&m);
    } while ( n >= m );
    
                      // tem que iniciar como primo ver se é
	
    for ( ; n <= m; n++) 
    {
     if ( n < 2 ) p = 0;           // P é um flag 0 == nao primo e 1 == primo;
     else p = 1;                   // tem que iniciar como primo ver se é ou não;
      
        while ( i <= sqrt(n))
      {
    	 if ( n % i == 0 )
    	{
    		p = 0;
    		break;       
	}
	 else i++;
      }
	 if ( p == 1 ) 
	 {
		printf ("\n %d e primo",n);  
		 i = 2;        //tem que reajustar a variavel de controle 
	 }
	 else                     
	 {                              
		 printf("\n %d nao e primo",n); 
		 i = 2;         //tem que reajustar a variavel de controle  
	 }
     }
}
