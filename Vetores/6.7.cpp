#include<stdio.h>
main()
        // preenchendo coluna, movendo linha; 
{
	int i,j,x = 10,m[4][5];   //m[linha][coluna],,,m[i][j];
	for ( i = 0; i < 4; i++ )
	{
		for ( j = 0; j < 5; j++ )
		{
			m[i][j] = x; 
			x += 10;
			printf("\t%d",m[i][j]);
		}
		printf("\n");
	}
} 
      // preenchendo linha movendo coluna
      
      for ( j = 0; j < 5; j++ )
      {
      	for ( i = 0; j < 4; j++ )
      	{
      	    m[i][j] = x;             //faz a operação;
			x += 10;
		}
	  }
	  	for ( i = 0; i < 4; i++ )
	 {
		for ( j = 0; j < 5; j++ )
		{                          //tem que imprimir com linha 
			printf("\t%d",m[i][j]);
		}
		printf("\n");
 	 }
} 

