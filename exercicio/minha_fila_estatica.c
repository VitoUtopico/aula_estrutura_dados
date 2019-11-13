#include<stdio.h>
#include<stdlib.h>

int inicio = 0;
int n_elementos = 0;
int fila[5];
int maximo = sizeof(fila)/sizeof(int);

void inserir(int elemento){
    if(n_elementos < maximo){
        int posicao = (inicio + n_elementos) % (maximo);
        fila[posicao] = elemento;
        n_elementos ++;
    }
    else{
        printf("\n\nNumero maximo de elementos atingido\n\n");
    }
}

void printar_fila(int fila[]){
    for(int i = 0; i<n_elementos; i++){
        printf("%i ",fila[i]);
    }
    printf("\n");
}

void remover(){
    if(n_elementos > 0){
        inicio ++;
        n_elementos --;
    }
    else{
        printf("\n\nFila vazia\n\n");
    }
    
}

int main(int argc, char *argv[]){
    printar_fila(fila);
    inserir(2);
    printar_fila(fila);
    inserir(5);
    printar_fila(fila);
    inserir(14);
    printar_fila(fila);
    inserir(12);
    printar_fila(fila);
    inserir(32);
    printar_fila(fila);
    inserir(64);
    printar_fila(fila);
    inserir(53);
    printar_fila(fila);
    remover();
    printar_fila(fila);
    remover();
    printar_fila(fila);
    remover();
    printar_fila(fila);
    remover();
    printar_fila(fila);
    remover();
    printar_fila(fila);
    remover();
    printar_fila(fila);
    remover();
    printar_fila(fila);
}