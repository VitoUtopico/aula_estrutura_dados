#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct STACK{
    int n_elementos;
    int elementos[5];
}Stack;

void inicializa(Stack *ptr_stack){
    ptr_stack->n_elementos = 0;
}

void insere(Stack *ptr_stack, int elemento){
    int maximo = (sizeof(ptr_stack->elementos) / sizeof(int));
    
    if (ptr_stack->n_elementos < maximo){
        ptr_stack->elementos[ptr_stack->n_elementos] = elemento;
        ptr_stack->n_elementos++;
    }
    else{
        printf("Numero maximo de elementos atingido.\n");
    }    
}

void retira(Stack *ptr_stack){
    if(ptr_stack->n_elementos > 0){
        ptr_stack->n_elementos --;
    }
    else{
        printf("Impossivel retirar elemento \nPilha vazia.\n");
    }
}

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
    insere(&stack, 15);
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
