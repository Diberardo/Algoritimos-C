<h1>Vetores</h1>
Como em outras linguagens de programação, C permite declarar e utilizar vetores. Um vetor é uma sequência de variáveis de mesmo tipo e referenciadas por um nome único.

As principais características de vetores em C são:

os valores são acessíveis individualmente através de índices;<br>
Os elementos do vetor ocupam posições contíguas de memória;<br>
Os vetores têm tamanho predefinido e fixo; eAo contrário de Pascal, o índice do primeiro elemento é 0 (zero).<br>
Declaração<br>
Um vetor é declarado da seguinte forma em C:<br>

  <tipo_base> nome_do_vetor [<tamanho_do_vetor>] ;
Alguns exemplos:

int   valor[5];         // vetor de 5 inteiros, índices em 0..4<br>
float temperatura[24];  // vetor de 24 temperaturas<br>
char  digito[10];       // vetor de 10 caracteres<br>
Acesso aos elementos (i)<br>
O operador pós-fixado [n] (par de colchetes) denota o conteúdo da posição n do vetor. O índice de um vetor deve ser do tipo int.<br>

int valor[5];         // vetor de 5 inteiros
int n, x, y;

   x = valor[3];      // atribui a x o quarto elemento do vetor<br>
   ...
   n = ...            // n DEVE estar no intervalo 0..4<br>
   y = valor[n];      // atribui a y o n-ésimo elemento do vetor<br>
Uma prática recomendada é definir a dimensão do vetor usando uma macro de preprocessador, para facilitar futuras alterações no código:<br>

#define MAXVET 1000<br>

float v[MAXVET];<br>

for (i=0; i<MAXVET; i++)
  v[i] = 0.0;
Inicialização
Os elementos de um vetor podem ser inicializados durante sua declaração, como mostram os exemplos a seguir:

short value[5] = { 32, 475, 58, 119, 7442 } ;  // inteiro de 16 bits

float temperatura[24] = 
{
  17.0, 18.5, 19.2, 21.4, 22.0, 23.5,
  24.1, 24.8, 25.8, 26.9, 27.1, 28.9,
  29.5, 31.0, 32.3, 33.7, 34.9, 36.4,
  37.0, 38.5, 39.6, 40.5, 42.3, 44.2
} ;

char digito[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' } ;
Importante: considerando o padrão C ANSI, o compilador precisa saber o tamanho do vetor para reservar memória para ele durante a compilação. Por isso, o número de elementos do vetor deve ser uma constante (ou uma expressão cujo resultado seja constante).

Por exemplo, a seguinte declaração de vetor não é permitida em ANSI C (mas é válida em C99):

int func (int size)
{
  int vetor [size]; // proibido em ANSI C, pois "size" não é constante
}
Acesso aos elementos (ii)
O acesso aos elementos de um vetor se faz de forma similar a outras linguagens: basta indicar o nome do vetor e a posição (índice) que se deseja acessar.

Em C, o índice de um vetor sempre inicia na posição 0 e termina na posição size-1.

Exemplos:

value[0] = 73 ;<br>
value[3] = value[2] + 10 ;<br>
value[4]++ ;                // obtém o conteúdo de value[4] e o incrementa<br>

for (i=0; i < 24; i++)  // "i" deve ir de 0 a 23
  temperatura[i] = 20 + i/2 ;
Os elementos de um vetor sempre ocupam posições contíguas e de mesmo tamanho na memória. Por exemplo, o vetor ''value[5]'' será alocado na memória RAM da seguinte forma (lembrando que ''sizeof(short)'' = 2 bytes):<br>
<br>Autor: Roberto A Hexsel<br>
