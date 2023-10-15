/*Construa um algoritmo que contenha uma lista dinâmica homogênea para 
guardar números digitados pelo usuário, 
solicite ao usuário a quantidade de número e os números e 
depois os imprima em tela.
*/
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

	int i, qtd;

	printf("Digite a quantidade  :");   
	scanf("%i",&qtd);
	for (i = 0; i < qtd; i++) {
		LISTA *l = (LISTA*) malloc(sizeof(LISTA));
        printf("Digite o %i numero :", i + 1);
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

    // impressão dos dados da lista
    if (inicio == NULL) {
        printf("Lista vazia!!\n");
    } else {
        aux = inicio;
        while (aux != NULL) {
            printf("%i\n",aux->num );
            aux = aux->prox;
        }
	}

	
	return 0;
}