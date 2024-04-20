#include<stdio.h>
main()
{
	int AA, AN, ID,IM,IA;
	
	printf("\ndigite seu ano de nascimento = ");
	scanf("%d", &AN);
	
	printf("\ndigite seu ano atual = ");
	scanf("%d", &AA);
	
	IA = AA - AN;
	ID = IA  * 365;
	IM = ID / 30; // OU 12 que é os messes TAMBEM FUNCIONA;
	
	printf("\nSua idade em anos = %d", IA); 
	printf("\nSua idade em messes = %d", IM);
	printf("\nSua idade em dias = %d", ID);
}
