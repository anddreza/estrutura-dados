/*
3)	Construa um algoritmo que contenha uma lista 
dinâmica homogênea para guardar números digitados 
pelo usuário, solicite ao usuário a quantidade de 
número e os números e depois os imprima em tela.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p;
}LISTA;

int main(void){
	int qtd, i;
	LISTA *l = NULL;
	
	printf("Digite a quantidade de numeros: ");
	scanf("%i",&qtd);

	for(i=1;i<=qtd;i++){
		LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite %i numero: ",i);
		scanf("%i",&novo->n);
		novo->p=l;
		l=novo;
	}
	
	printf("Os numeros sao: ");
	while(l!=NULL){
		printf("%i, ",l->n);
		l=l->p;
	}
	
	return 0;
}