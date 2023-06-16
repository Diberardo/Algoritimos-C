#include<stdio.h>
main()
{
	const float pi = 3.14;      // O PI tem um valor definido por isso tem que ser um Constante Floot 
	float A, R;
	
	 printf("digite seu raio: ");
	 scanf("%f",&R);
	
	  A = R * R * pi;     
     
	 printf("\nSeu Area É = %.2f ", A );	// O %.2f é para diminuir a casas decimais depois da virgula
	
}
