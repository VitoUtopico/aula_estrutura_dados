#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct STACK{
    int n_elementos;
    int elementos[10];
}Stack;

void insere(Stack *ptr_stack, int elemento){
    int maximo = (sizeof(ptr_stack->elementos) / sizeof(int));
    
    if (ptr_stack->n_elementos < maximo){
        ptr_stack->elementos[ptr_stack->n_elementos] = elemento;
        ptr_stack->n_elementos++;
    }
    
}

void inicializa(Stack *ptr_stack){
    ptr_stack->n_elementos = 0;
}

int main(int argc, char const *argv[])
{
    Stack stack;
    Stack *pilha = &stack;

    inicializa(&stack);

    insere(&stack, 3);
    insere(pilha, 75);
    insere(pilha, 5);

    printf("\n\nElemento: %d\n", stack.elementos[1]);
    printf("elementos %i\n",stack.n_elementos);
    printf("stack %i\n",stack);
    printf("pilha %i\n",*pilha);
    printf("&stack %i\n",&stack);

    return 0;
}
