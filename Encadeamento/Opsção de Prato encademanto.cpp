#include<stdio.h>

main()

{
	int ops; float vb; char sob; float p = 0;
	
	printf("\ndigite o valor base de cada refeicao = "); scanf("%f",&vb);
	printf("\ndigite qual refeicao o senhor quer = "); scanf("%d",&ops);
	printf("\nO senhor quer sobremesa = "); fflush(stdin); scanf("%c",&sob);
	
	if (ops == 1)
	{
	    printf("\nPeixe"); 
		p = vb * 1.10;
	}
	else if (ops == 2)
	{
		printf("\nCarne Bolvina"); 
		p = vb * 1.20; 
	}
	else if (ops == 3)
    {
    	printf("\nFrango"); 
		p = vb * 1.15;
	}
	else if (ops == 4) 
	{
		printf("\nVegetariano"); 
		p = vb * 0.5; 
	}
	else
	{ 
	    printf("\ndigite um numero valido de 1 e 4");
        return  0;
	}
	printf ("\nO preco prato ficou = %.2f", p);
	  if (sob == 's' or 'Sim' or 'S')
    {
     p = p + vb * 0.05;
    }
	printf ("\nO preco final ficou = %.2f", p);
}
