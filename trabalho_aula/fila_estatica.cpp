#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define MAX 5

 bool cond;

typedef struct {

	int chave[MAX];
	int primeiro;
	int ultimo;
	int nItens; 

}Fila;

// inicializarFila

void inicializarFila(Fila *F){
	F->primeiro=0;
	F->nItens=0;
}

int tamanhoFila(Fila *F){
	return F->nItens;
}
void exibirFila(Fila* F){
	printf("Fila:\"");
	int i=F->primeiro;
	int temp;
	for(temp = 0; temp <F->nItens; temp++){
		printf(" %d ", F->chave[i]);
		i=(i+1) % MAX;
	}
	printf("\"\n");

} 

//Inser��o de elementos - condi��o 

bool inserirElementosFila(Fila *F, int dado){
	if(F->nItens>=MAX) return false;
	int posicao=(F->primeiro + F->nItens) % MAX;
	F->chave[posicao]= dado;
	F->nItens++;
	return true;
}

// exclus�o de elementos

/*

bool excluirElementosFila(Fila *F, int elemento){
	if(F->nItens==0) return false;
	Elemento = F->chave[F->primeiro];
	F->primeiro=(F->primeiro+1) % MAX;
	F->nItens--;
	return true;
}
*/
int main(){
	Fila F;
	int dado, Elemento;
	inicializarFila(&F);
	printf("Digite um n�mero inteiro para compor a sua fila");
	scanf("%d", &dado);
	inserirElementosFila(&F,dado);
	exibirFila(&F);
	printf("Digite um n�mero inteiro para excluir a sua fila");
	scanf("%d", &Elemento);
//	excluirElementosFila(Elemento);	
	
	
return 0;	
}
