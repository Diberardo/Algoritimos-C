#include<stdio.h>

main()

{
	int ld;
	
	 printf("\nNumero de lados = "); scanf("%d",&ld);
	 
	  if (ld < 3) printf("\nNao e um poligono");
	   else if (ld == 3) printf("\nE um triangulo");
	    else if (ld == 4) printf("\nE um retangulo");
	     else if (ld == 5) printf("\nE um pentagono");
	      else if (ld == 6) printf("\nE um hexagono");
	       else if (ld > 6) printf ("\nIsso esta alem de um Hexagono");
}
