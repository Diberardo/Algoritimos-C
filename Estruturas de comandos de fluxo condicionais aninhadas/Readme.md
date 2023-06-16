<h1>Estruturas de comandos de fluxo condicionais aninhadas</h1>
Condições com mais testes lógicos<br>
▪ Alguns problemas pressupõem a existência de mais do que um teste lógico<br>
▪ Nesse caso, é uma questão de organização da lógica destinada à resolução do problema, que precisa ser organizada para acomodar todos os testes necessários<br>
▪ Continuamos ainda com o paradigma da lógica proposicional aplicada à programação, ou seja, um teste lógico só tem uma entre duas respostas, verdadeiro ou falso<br>
▪ Isso indica que os testes serão ajustados para o formato mais habitual, contendo dois operandos mediados por um operador relacional (opn1 op_rel opn2), como, por exemplo, (A <= B)<br>
Comando if com else aninhado<br>
▪ Consiste em colocar os próximos if´<br>
s como parte falsa do else anterior<br>
▪ Sintaxe:<br>
a) if (<cond_1>) [comando a ser executado se cond_1 for verdadeira];<br>
else if (<cond_2>) [comando a ser executado se a cond_1 for falsa e cond_2 for verdadeira];<br>
else if (<cond_3>) [comando a ser executado se a cond_2 for falsa e cond_3 verdadeira];<br>
...<br>
else if (<cond_n>) [comando a ser executado se a cond_(n-1) for falsa e cond_n for <br>
verdadeira];<br>
else [comando a ser executado se todas as condições anteriores forem falsas];<br>
▪ Assim como nos casos anteriores, o último else não é obrigatório e o número de condições depende do problema<br>
Comando if com else e blocos com mais de um comando<br>
b) if (<cond_1>)<br>
{<br>
[comando_1 a ser executado se cond_1 for verdadeira];<br>
[comando_2 a ser executado se cond_1 for verdadeira];<br>
...<br>
[comando_n a ser executado se cond_1 for verdadeira];<br>
}<br>
else if (<cond_2>)<br>
{<br>
[comando_1 a ser executado se a cond_1 for falsa e cond_2 for verdadeira];<br>
[comando_2 a ser executado se a cond_1 for falsa e cond_2 for verdadeira];<br>
...<br>
[comando_n a ser executado se a cond_1 for falsa e cond_2 for verdadeira];<br>
}<br>
...<br>
Comando if com else e blocos com mais de um comando<br>
b) else if (<cond_3>)<br>
{<br>
[comando_1 a ser executado se a cond_2 for falsa e cond_3 for verdadeira];<br>
[comando_2 a ser executado se a cond_2 for falsa e cond_3 for verdadeira];<br>
...<br>
[comando_n a ser executado se a cond_2 for falsa e cond_3 for verdadeira];<br>
}<br>
...<br>
else if (<cond_n>) <br>
{<br>
[comando_1 a ser executado se a cond_(n-1) for falsa e cond_n for verdadeira];<br>
[comando_2 a ser executado se a cond_(n-1) for falsa e cond_n for verdadeira];<br>
...<br>
[comando_n a ser executado se a cond_(n-1) for falsa e cond_n for verdadeira];<br>
}<br>
...<br>
Comando if com else e blocos com mais de um comando<br>
b) else {<br>
[comando_1 a ser executado se todas as condições anteriores foram falsas];<br>
[comando_2 a ser executado se todas as condições anteriores foram falsas];<br>
...<br>
[comando_n a ser executado se todas as condições anteriores foram falsas];<br>
}<br>
