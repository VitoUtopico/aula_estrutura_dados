#include<stdio.h>
#include<stdlib.h>

typedef struct ELEMENTO{
    int dado;
    struct ELEMENTO *proximo;
}Elemento;

typedef struct FILA{
    Elemento *inicio;
    Elemento *fim;
}Fila;

void inicializa(Fila *fila){
    fila->inicio = NULL;
    fila->fim = NULL;
}

void inserir(Fila *fila, int dado){
    Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
    novo->dado = dado;
    novo->proximo = NULL;

    if(fila->inicio == NULL){   //Caso inicio valha NULL, a fila está vazia, então o novo elemento
        fila->inicio = novo;    //passa a ser apontado por inicio como primeiro elemento da fila.
    }
    fila->fim = novo;
}


int main(int argc, char *argv[]){

}