#include<stdio.h>
#include<stdlib.h>

/*
O Elemento é como um nó da fila, contem o dado
e um ponteiro apontando para o próximo elemento
*/
typedef struct ELEMENTO{ 
    int dado;
    struct ELEMENTO *proximo;
}Elemento;

/*
Fila é uma estrutura para gerenciar os elementos
e é composta por um ponteiro que aponta para o
primeiro elemento, um que aponta para o último e
um inteiro que conta o número de elementos
*/
typedef struct FILA{
    Elemento *inicio;
    Elemento *fim;
    int n_elementos;
}Fila;

/*
A inicialização garante que não haja valores
aleatórios nos espaços de memória que serão
utilizados
*/
void inicializa(Fila *fila){
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->n_elementos = 0;
}

/*
Insere elementos ao fim da fila
*/
void inserir(Fila *fila, int dado){
    Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
    novo->dado = dado;
    novo->proximo = NULL;

    if(fila->inicio == NULL){   //Caso inicio valha NULL, a fila está vazia, então o novo elemento
        fila->inicio = novo;    //passa a ser apontado por inicio como primeiro elemento da fila.
    }
    else{
        fila->fim->proximo = novo;
    }
    fila->fim = novo; //O ponteiro de fim da fila aponta par ao novo elemento.
    fila->n_elementos ++; //Incrementa o contador de elementos
}

/*
Remove elemento do início da fila.
*/
void remover(Fila *fila){
    if(fila->inicio != NULL){ //Testa se a fila não está vazia.
    Elemento *deletar;
    deletar = fila->inicio;
    fila->inicio = fila->inicio->proximo; //Ponteiro que aponta para o primeiroelemento da fila passa a apontar para
    free(deletar);                        //o até então segundo elemento. Libera espaço de memória do elemento removido
    fila->n_elementos --;                 //Decrementa o contador de elementos
    }
    else{
        printf("Fila vazia\n");
    }
}

/*
Apresenta a fila elemento por elemento, e cada elemento em uma linha.
Ao final, mostra o número de elementos contidos na fila.
*/
void printa_fila(Fila *fila){
    int i = 0;
    Elemento *printar;
    printar = fila->inicio;
    while(printar != NULL){
        printf("Elemento %d: %d\n", i+1, printar->dado);
        i++;
        printar = printar->proximo;
    }
    printf("\nNumero de elementos: %d", fila->n_elementos);
}


int main(int argc, char *argv[]){
    Fila fila1;
    inicializa(&fila1);
    inserir(&fila1, 5);
    remover(&fila1);
    remover(&fila1);
    inserir(&fila1, 7);
    inserir(&fila1, 15);
    remover(&fila1);
    inserir(&fila1, 10);
    inserir(&fila1, 21);
    inserir(&fila1, 7);
    inserir(&fila1, 255);
    inserir(&fila1, 2048);
    printa_fila(&fila1);
    
}