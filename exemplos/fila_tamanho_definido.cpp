// cria uma fila vazia
#include<stdio.h>
#include<stdlib.h>
int comeco = 0;   // comeco da fila
int tamanho = 0;  // tamanho da fila (numero de elementos)
int Fila[15];   // vetor da fila

void inserir( int );    // inserir elementos no fim da fila
void remover( void );   // remover elementos do comeco da fila

int main(void)
{
   int i; // contador
   
   inserir(1);
   inserir(10);
   inserir(100);
   inserir(1000);
   remover();
   inserir(6);
   remover();
   inserir(60);
   
   //// mostra fila na tela ////
   for(i = 0; i < 15; i++)
      printf("fila[%i] = %i\n", i, Fila[i]);
   
//   system("pause"); // comente esta linha se for rodar no linux
   return ( 0 );
    
} // fim main    

void inserir( int elemento )
{
   //// checa se a fila esta cheia ////
   if( tamanho == 15 )
      printf("\nfila cheia\n");

   else {
      //// converte os valores virtuais (tamanho e comeco) para o valor real utilizando o operador modulo ////
      Fila
      [ ((comeco + tamanho) % 15) ] = elemento; 
      //// incrementa tamanho da fila (elemento foi inserido) ////
      tamanho ++; 
   } 
   
} // fim funcao

void remover(void)
{
   //// checa se a fila esta vazia ////
   if( tamanho == 0 )
      printf("\nfila vazia\n");
   
   else {
      //// apaga o primeiro elemento da fila deslocando o ponteiro do comeco para proximo elemento ////
      comeco ++;
      //// decrementa o contador de tamanho (um valor foi removido) ////
      tamanho --;
   }
   
} // fim funcao
