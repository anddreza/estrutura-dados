#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	int n;
	struct list *p;
}LISTA; 

int main(void){
	LISTA *inicio = NULL;
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	novo->n=5;
	novo->p=inicio;
	inicio=novo;

	novo->n=7;
	novo->p=inicio;
	inicio=novo;

	novo->n=2;
	novo->p=inicio;
	inicio=novo;

	novo->n=8;
	novo->p=inicio;
	inicio=novo;
}