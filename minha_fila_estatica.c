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
}

int main(int argc, char *argv[]){
    inserir(2);
    inserir(5);
    inserir(14);
    inserir(12);
    inserir(32);
    inserir(64);

printar_fila(fila);

}