#include<stdio.h>
#include<math.h>
main()
{
	float A=0,B=0,C=0,DEL=0,X1=0,Y2=0;          
	
	 printf("\ndigite o valor de A = "); scanf("%f",&A);
	 printf("\ndigite o valor de B = "); scanf("%f",&B);
	 printf("\ndigite o valor de C = "); scanf("%f", &C);
	    
	   if (A<=0 && B<=0 && C<=0)  // Verificar se um dos valores é == 0 
	   {
		printf("\ndigite um numero valido\n");  
	        retun 0;  
	   }   
	      else 
             {
		     DEL = (B * B) - 4 * A* C;
	   
	        if (DEL < 0)         
	          printf("\nNao existe raizs reais!\n");
       
	          else
	     {
	             X1 = (-B + sqrt(DEL))/(2 * A); 
	              printf("\nO valor X1 = %.4f" ,X1);
	               if (DEL != 0);
	         {
	                Y2 = (-B - sqrt(DEL))/(2 * A);
	                 printf("\nO valor Y2 = %.4f" ,Y2);
	         }
	   }
     }             
}
