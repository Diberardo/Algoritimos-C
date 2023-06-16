#include<stdio.h>
 main()
 {
 	  float n1, n2, M;
 	
 	 printf("digite sua primiera nota = ");
 	 scanf("%f", &n1);
 	  
 	 printf("digite sua segunda nota = ");
 	 scanf("%f", &n2); 
 	  
 	     M = ( n1 + n2 )/2;
     
         if (M>=6) printf("\nAprovado");
         else printf("\nreprovado");
       
     printf("\n media = %2f" , M);
 }
 
