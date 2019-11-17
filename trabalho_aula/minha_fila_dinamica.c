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
    else{
        fila->fim->proximo = novo;
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
        printf("Fila vazia\n");
    }
}

void printa_fila(Fila *fila){
    int i = 0;
    Elemento *printar;
    printar = fila->inicio;
    while(printar != NULL){
        printf("Elemento %d: %d\n", i+1, printar->dado);
        i++;
        printar = printar->proximo;
    }
}


int main(int argc, char *argv[]){
    Fila fila1;
    inicializa(&fila1);
    inserir(&fila1, 5);
    inserir(&fila1, 7);
    inserir(&fila1, 15);
    remover(&fila1);
    inserir(&fila1, 10);
    inserir(&fila1, 21);
    printa_fila(&fila1);
    
}