#include<stdio.h>

int Potencia ( int base, int elevado )
{
	if ( elevado == 0 ) return 1;
	else return (base * Potencia ( base , (elevado-1 ) ));
}
main()
{
	int base, elevado;
	
	do
	{
		printf("\nDigite base do numero:");
		scanf("%d",&base);
		printf("\nDigite o numero elevado:");
		scanf("%d",&elevado);
	} while ( base <= 0 || elevado < 0 );
	printf("Resultado = %d", Potencia(base,elevado));
}
