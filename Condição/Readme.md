<h1>Estruturas de comandos de fluxo condicionais</h1>
Proposição lógica e valores possíveis<br>
▪ Uma condição pressupõe o julgamento de uma proposição lógica simples<br>
▪ Em programação estruturada, a maior parte das proposições simples é baseada em <br>
um teste que inclui dois operandos mediados por um operador relacional<br>
▪ Como já mencionamos, os operadores relacionais são >, <, >=, <=, == e !=<br>
▪ Exemplos de condicionais (testes ou proposições lógicas):<br>
▪ A > B<br>
▪ X == 10<br>
▪ C <= Z<br>
Comando if<br>
▪ Em C, o comando if é uma estrutura de controle de fluxo condicional que permite que um bloco de código seja executado somente se uma determinada condição for verdadeira<br>
▪ Sintaxe:<br>
a) if (<condição>) [comando a ser executado se a condição for verdadeira];<br>
b) if (<condição>)<br>
{<br>
[comando_1 a ser executado se a condição for verdadeira];<br>
[comando_2 a ser executado se a condição for verdadeira];<br>
...<br>
[comando_n a ser executado se a condição for verdadeira];<br>
}<br>
Caso só exista umcomando a ser executado na condição verdadeira, não é necessário marcar o bloco com chaves<br>
  Comando if - Exemplo<br>
▪ Dado um preço de produto, conceder um desconto de 10% se esse preço for maior que 100. Exibir o preço após dar ou não o desconto.<br>
#include<stdio.h><br>
main()<br>
{<br>
float preco;<br>
printf("\nDigite o preco do produto = "); scanf("%f",&preco);<br>
if (preco > 100) preco = preco * 0.9;<br>
printf("\nPreco final = %.2f",preco);<br>
}<br>
Apenas se o valor armazenado na variável preço for maior que 100 será dado o desconto; caso contrário, o valor permanece igual<br>
Comando if - Exemplo<br>
▪ Dado um preço de produto, conceder um desconto de 10% se esse preço for maior que 100; além disso, escrever “produto com 10% de 
desconto”. Exibir o preço após dar ou não o desconto. <br>
#include<stdio.h><br>
main()<br>
{<br>
float preco;<br>
printf("\nDigite o preco do produto = ");scanf("%f",&preco);<br>
if (preco > 100) <br>
{<br>
preco = preco * 0.9;<br>
printf("\nProduto com 10%% de desconto");<br>
}<br>
printf("\nPreco final = %.2f",preco);<br>
}<br>
Aqui, as ações a serem executadas caso a condição seja verdadeira incluem 2 comandos. Nesse caso, o uso das chaves para marcar o bloco de comandos é obrigatório.<br>
Comando if com else<br>
▪ É possível combinar o if com outra estrutura de controle de fluxo, o comando else, que permite indicar especificamente as ações a serem tomadas caso a condição resulte falsa<br>
▪ Sintaxe:<br>
a) if (<condição>) [comando a ser executado se a condição for verdadeira];<br>
else [comando a ser executado se a condição for falsa];<br>
Comando if com else<br>
b) if (<condição>)<br>
{<br>
[comando_1 a ser executado se a condição for verdadeira];<br>
[comando_2 a ser executado se a condição for verdadeira];<br>
...<br>
[comando_n a ser executado se a condição for verdadeira];<br>
}<br>
else<br>
{<br>
[comando_1 a ser executado se a condição for falsa];<br>
[comando_2 a ser executado se a condição for falsa];<br>
...
[comando_n a ser executado se a condição for falsa];<br>
}
Comando if com else- Exemplo<br>
▪ Dado um preço de produto, conceder um desconto de 10% se esse preço for maior que <br
100; caso contrário, dar um desconto de 8%. Exibir o preço após o cálculo.<br>
#include<stdio.h><br>
main()<br>
{<br>
float preco;<br>
printf("\nDigite o preco do produto = "); scanf("%f",&preco);<br>
if (preco > 100) preco = preco * 0.9;<br>
else preco = preco * 0.92;<br>
printf("\nPreco final = %.2f",preco);<br>

