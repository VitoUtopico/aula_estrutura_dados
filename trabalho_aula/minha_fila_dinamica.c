#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void remover(Fila *fila){
    if(fila->inicio != NULL){
    Elemento *deletar;
    deletar = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    free(deletar);
    }
    else{
        printf("Fila vazia");
    }
}


int main(int argc, char *argv[]){
    Fila fila1;
    inicializa(&fila1);
    inserir(&fila1, 5);
    remover(&fila1);
    inserir(&fila1, 7);
    remover(&fila1);
    remover(&fila1);
    printf("%d", fila1.inicio->dado);
}