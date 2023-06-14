//Em uma escola, um aluno faz duas provas e precisa ter a média 
//aritmética calculada em relação às duas notas obtidas. Caso esse 
//aluno obtenha média maior ou igual a 6, estará aprovado; caso 
//contrário, estará reprovado. Construa um algoritmo que permita a 
//entrada das duas notas, o cálculo da média, a exibição da média e a 
//exibição do resultado (aprovado ou reprovado) ???

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
 
