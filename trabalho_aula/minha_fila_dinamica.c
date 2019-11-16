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


int main(int argc, char *argv[]){

}