#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	int n;
	struct list *prox, *ant;
	
}LISTA; 

int main(void){
	LISTA *inicio = NULL;
	LISTA *fim = NULL; 
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	//Quando é o primeiro dado, quando inicio for NULL tenho que tomar uma ação de ambos serem nulos, 
	novo->n=5;
	novo->prox=fim;
	novo->ant=inicio;

	// novo é minha referencia, é o que tenho de informação
	inicio = novo;

	novo->n=7;
	novo->prox=NULL;
	inicio->prox = NULL;
	novo->ant=NULL;

	inicio = novo;

	novo->n=2;
	novo->prox=NULL;
	inicio->prox = novo;
	novo->ant=inicio;

	inicio = novo;


	novo->n=8;
	novo->prox=NULL;
	inicio->prox = novo;
	novo->ant=inicio;

	inicio = novo;
}