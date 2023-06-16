<h1>Comando while</h1>
O comando while permite que um certo trecho de programa seja executado ENQUANTO uma certa condição for verdadeira. A forma do comando while é a seguinte:<br>
<br>while (condição)<br>
{<br>
// comandos a serem repetidos<br>
// comandos a serem repetidos<br>
}<br>
// comandos após o 'while'<br>
O funcionamento é o seguinte:<br>
Testa a condição;<br>
Se a  condição for falsa então pula todos os comandos do bloco subordinado ao while e passa a executar os comandos após o bloco do while.<br>
Se  condição for verdadeira então executa cada um dos comandos do bloco subordinado ao while.<br>
Após executar o último comando do bloco do while volta ao passo 1.<br>
O comando while deve ser usado sempre que:<br>
não soubermos exatamente quantas vezes o laço deve ser repetido;<br>
o teste deva ser feito antes de iniciar a execução de um bloco de comandos;
houver casos em que o laço não deva ser repetido nenhuma vez.<br>
Exemplos<br>
 
int continua, contador;<br>
continua = 's';<br>
contador = 0;<br>

while (continua == 's')  // enquanto for igual a 's'<br>
{<br>
// comandos a serem repetidos<br>

   printf("Repentindo....\n");<br>

   contador = contador + 1;<br>

   printf("Tecle 's' se deseja continuar\n");<br>
   continua = getch();<br>
}<br>

if (contador == 0)<br>
   printf("O bloco NAO foi repetido.");<br>
else printf("O bloco foi repetido %d vezes", contador);<br>

<h1>Comando do-while</h1>
O comando do-while permite que um certo trecho de programa seja executado ENQUANTO uma certa condição for verdadeira. A forma do comando do-while é a seguinte:<br>
do<br>
{<br>
// comandos a serem repetidos<br>
// comandos a serem repetidos<br>
} while (condição);<br>
// comandos após o 'do-while'<br>

O funcionamento é o seguinte:<br>
Executa os comando dentro do bloco do-while;<br>
Testa a condição;<br>
Se a  condição for falsa então executa o comando que está logo após o bloco subordinado ao do-while .<br>
Se  condição for verdadeira então volta ao passo 1.<br>
O comando do-while deve ser usado sempre que:<br>
que não soubermos exatamente quantas vezes o laço deve ser repetido;<br>
o teste deva ser feito depois da execução de um bloco de comandos;<br>
o bloco de comandos deve se executado pelo menos 1 vez;<br>
