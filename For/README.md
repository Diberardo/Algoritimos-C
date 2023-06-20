<h1>For</h1>
O for é uma estrutura de repetição na qual seu ciclo será executado por um tempo ou condição pré-determinados e em uma quantidade de vezes que determinamos.

O for possui a seguinte estrutura:

Copiar
for (<variável de controle>, <análise da variável de controle>, <incremento da variável de controle>) {
    // Código a ser executado
}
Quando utilizamos o for, precisamos de uma variável para auxiliar a controlar a quantidade de repetições a serem executadas. Essa variável é chamada de variável de controle e é declarada no primeiro argumento do for.

O segundo argumento do for é utilizado para definir até quando o for será executado. Geralmente, trata-se de uma condição booleana em cima da variável de controle.

O terceiro argumento indica o quanto a variável de controle será modificada no final de cada execução dentro do for.

Veja o exemplo abaixo:

Copiar
package br.com.treinaweb;

public class Exemplo {
	
    public static void main(String[] args) {
        for (int i = 0; i <= 10; i++) {
            System.out.println(“A variável i agora vale “ + i);
        }
    }
	
}
A execução desse código causaria a seguinte saída:

A variável i agora vale 0 A variável i agora vale 1 A variável i agora vale 2 A variável i agora vale 3 A variável i agora vale 4 A variável i agora vale 5 A variável i agora vale 6 A variável i agora vale 7 A variável i agora vale 8 A variável i agora vale 9 A variável i agora vale 10

Isso acontece porque:

• A variável de controle, que chamamos de “i”, tem seu valor inicial como 0;

• No segundo bloco, onde escrevemos “i <= 10”, estamos dizendo que o conteúdo do for será executado enquanto o valor de i for menor ou igual a 10;

• Com o terceiro bloco definido como “i++”, estamos dizendo que, no fim de cada execução do for, o conteúdo de “i” será incrementado em 1 unidade. Isso quer dizer que, no fim da primeira execução, i irá de 0 para 1; na segunda execução, irá de 1 para 2, e assim por diante;

• Com isso, o conteúdo do for será executado por 11 vezes, já que o i é iniciado em 0. A saída do código acima mostra que a mensagem foi escrita por 11 vezes, onde o “i” variou de 0 até 10.

Um ponto importante sobre o for é que, por causa da utilização da variável de controle, geralmente ele é utilizado quando sabemos exatamente quantas vezes queremos repetir a execução do trecho de código.


Autor(a) do artigo: Marylene Guedes

