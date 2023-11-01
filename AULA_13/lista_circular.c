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

	novo->n=5;
	novo->prox=NULL;
	novo->ant=NULL;

	fim = novo;
	inicio = novo;

	novo->n=7;
	novo->prox=NULL;
	inicio->prox=novo;
	novo->ant=inicio;
	
	fim->ant=novo;
	

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