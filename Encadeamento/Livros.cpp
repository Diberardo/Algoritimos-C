#include<stdio.h>

main()

{
	float const liv = 80;
	float pf; 
	int cod;
	
	 printf("\nSuspense: (codigos de 1 a 30) Terror: (codigos de 31 a 45)");
     printf("\nBiografia: (codigos de 46a 60) Didático: (codigos de 61 em diante)\n");
      printf("\nCodigo = "); scanf("%d", &cod);
      
	  if (cod <= 0)
	  {
	  printf("Invalido"); return 0;
	  }
	  else if (cod <= 30) 
      {
      	printf("\nSuspense"); pf = liv * 0.94;
	  }
	  else if (cod <= 45)
	  {
	  	 printf("\nTerro"); pf = liv * 0.92;
	  }
	  else if (cod <= 60) 
	  {
	  	printf("\nBiografia"); pf = liv * 0.88;
	  }
	  else  
	  	printf("\ndidatico"); pf = liv * 0.85;
	 
	    printf ("\npreco final do livro = %.2f ", pf);
}
