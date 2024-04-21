#include<stdio.h>
main()
{
	float P,A,IMC;
	 
	 printf("\nPeso = "); scanf("%f",&P);
	 printf("\nAltura = "); scanf("%f",&A);
	   
	  IMC = P / (A * A);
	  
	 if ( IMC < 20) 
		 printf("\nSubnormal");
	  else if (IMC < 25)
		  printf("\nNormal");
	   else if (IMC < 30) 
		   printf("\nSobrepeso");
	    else if (IMC < 35) 
		    printf("\nObesidade Leve");
	     else if (IMC < 40) 
		     printf("\nObesidade Moderada");
	      else if (IMC >= 40) 
		      printf("\nObesidade Morbida");
		  
 printf("\nIMC = %.2f",IMC);
}
