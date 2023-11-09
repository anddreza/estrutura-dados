//Elabore um algoritmo que leia uma sequência de números, armazenando-os numa lista simplesmente encadeada e que, em seguida, verifique se a lista linear encadeada está ordenada. Suponha que a lista não contenha números repetidos.
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int num;
	struct lista *prox;
}LISTA;

int main(void){
    LISTA *inicio = NULL;
    LISTA *fim = NULL;
    LISTA *aux;

	int i, numero;

    do{
		printf("Digite numero (-1 para sair): ");
		scanf("%i",&numero);
		if(numero !=-1){
            LISTA *l = (LISTA*) malloc(sizeof(LISTA));
            printf("Digite o numero :");
		    scanf("%i", &l->num);
            fflush(stdin);
		
        if (inicio == NULL) {
            inicio = l;
            fim = inicio;
            l->prox = NULL;
        } else {
            l->prox = inicio;
            inicio = l;
        }
    }
	}while (numero != -1);


    // impressão dos dados da lista
    if (inicio == NULL) {
        printf("Lista vazia!!\n");
    } else {
        aux = inicio;
        while (aux != NULL) {
            printf("%i\n",aux->num);
            aux = aux->prox;
        }
	}

	
	return 0;
}