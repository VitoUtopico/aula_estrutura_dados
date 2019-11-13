
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct TipoElemento{
	int valor;
}TElemento;
typedef struct TPilha{
	TElemento pilhaElementos[10];
	int topo;
} TPilha;

void inicializarPilha(TPilha *pPilha){
	pPilha->topo=-1;	
}
void empilhar(TPilha *pPilha){
	if(pPilha-> topo<9){
		pPilha->topo++;
		printf("Informe o valor da Pilha:");
		scanf("%d",&pPilha-> pilhaElementos[pPilha->topo].valor);
	}else{
		printf("Pilha cheia");
	}
}//
void desempilhar(TPilha *pPilha){
	if(pPilha->topo >0){
		pPilha-> topo--;
	}else{
		printf("Pilha Vazia");
	}
}
int main(){
	TPilha pilha;
	int op;
	inicializarPilha(&pilha);
	do{
	
	printf("\n \n Opcoes");
	printf("\n 1  Empilhar elementos");
	printf("\n  2 Desempilhar elementos");
	printf("\n  0 Sair");
	//linha();
	printf("\n Entre com a Opcoes:\n");
	scanf("%d",&op);
	switch (op){
	   case 1:empilhar(&pilha);break;
	   case 2:desempilhar(&pilha);break;
	   case 0:break;
   	default: printf("Opcao invalido\n");
   	}
   	
	}
	while(op!=0);	
	
}

