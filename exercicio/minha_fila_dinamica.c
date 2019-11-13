#include<stdio.h>
#include<stdlib.h>

struct Fila{
    int primeiro;
    int ultimo;
    int n_itens;
    int *dados;
};

void inicializa_fila(struct Fila *fila, int espacos){
    fila->dados =  (int*) malloc (espacos * sizeof(int));

}

void inserir(struct Fila *fila, int valor){
    fila->dados[fila->primeiro + fila->n_itens] = valor;
}

int main(int argc, char *argv[]){

}