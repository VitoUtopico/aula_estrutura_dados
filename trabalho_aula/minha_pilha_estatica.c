#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAXIMO 5 //Define número máximo de elementos para a pilha

/*
Definição da estrutura da pilha, composta pelo "número de elementos atual"
e um vetor de elementos da pilha
*/
typedef struct STACK{
    int n_elementos;
    int elementos[MAXIMO];
}Stack;


/*
Inicialização para que o contador de elementos comece do 0. Caso não
se inicialize o contador, ele pode ocupar um espaço de memória com qualquer
tipo de conteúdo diferente do 0 esperado
*/
void inicializa(Stack *ptr_stack){
    ptr_stack->n_elementos = 0;
}

/*
Inserção de dados
*/
void insere(Stack *ptr_stack, int elemento){    
    if (ptr_stack->n_elementos < MAXIMO){                       //If para que o valor seja inserido
        ptr_stack->elementos[ptr_stack->n_elementos] = elemento;//apenas caso o vetor não tenha
        ptr_stack->n_elementos++;                               //atingido seu tamanho máximo.
    }
    else{
        printf("Numero maximo de elementos atingido.\n");       //Caso contrário retorna uma mensagem
    }                                                           //indicando pilha cheia ao usuário.
}

/*
Remoção de dado do topo da pilha
*/
void retira(Stack *ptr_stack){
    if(ptr_stack->n_elementos > 0){ //Caso o número de elementos seja maior que 0, "n_elementos"
        ptr_stack->n_elementos --;  //é decrementado, passando a indicar como último elemento, o
    }                               //anterior.
    else{
        printf("Impossivel retirar elemento \nPilha vazia.\n");//Caso contrário, retorna uma mensagem
    }                                                          //de pilha vazia ao usuário
}

/* 
Apresenta todos dados contidos na pilha
*/
void print_stack(Stack *ptr_stack){
    for (int i = 0; i < ptr_stack->n_elementos; i ++){
        printf("Elemento %d: %d\n", i, ptr_stack->elementos[i]);
    }
    if(ptr_stack->n_elementos == 0){
        printf("Pilha vazia.\n");
    }
}

int main(int argc, char const *argv[]){
    Stack stack;

    inicializa(&stack);
    
    insere(&stack, 2);
    retira(&stack);
    insere(&stack, 15);
    insere(&stack, 15);
    retira(&stack);
    retira(&stack);
    retira(&stack);
    insere(&stack, 3);
    insere(&stack, 5);
    insere(&stack, 51);
    insere(&stack, 89);
    retira(&stack);
    insere(&stack, 40);
    insere(&stack, 45);
    insere(&stack, 72);
    
    print_stack(&stack);



    return 0;
}
