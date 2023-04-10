#include<stdio.h>

main()

{
	float F, T;
	 
	 printf("Aulas dadas = ");
	  scanf("%f" , &T);
	  
	   printf("\nFaltas = ");
	    scanf("%f" , &F);
	     
	       if (F/T > 0.25)
	       
	        printf("\nREPROVADO!!!");
	         
	          else 
	           
	           printf("\nAPROVADO!!!");
	            
	             printf("\nSua Presença = %.2f", F/T);
}
