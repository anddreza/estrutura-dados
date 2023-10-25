/* Lista simplesmente encadeada 
Escreva uma função que inverta a ordem dos elementos de uma lista simplesmente encadeada. Observação: a inversão deve ser realizada de forma a não alterar a ordem física dos elementos da lista, como é ilustrado na figura abaixo. 
Imagem prova.png 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p;
}LISTA;

//// int x = [12, 5, 8, 130]
int main(){
	LISTA *l = NULL;
	int numero;
	do{
		printf("Digite numero (-1 para sair): ");
		scanf("%i",&numero);
		if(numero !=-1){
			LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
			novo->n=numero;
			novo->p=l;
			l=novo;	
		}
	}while (numero != -1);

	imprimeLista(l);
	reverse(l);

	return 0;
}

void imprimeLista(LISTA *lista) {
    while (lista != NULL) {
        printf("%d ", lista->n);
        lista = lista->p;
    }
    printf("\n");
}

void reverse(LISTA *lista) {
    LISTA *ant = NULL;
    LISTA *atual = lista;
    LISTA *prox = NULL;

    while (atual != NULL) {
		
        prox = atual->p;
        atual->p = ant;
        ant = atual;
        atual = prox;
    }
    lista = ant;
	imprimeLista(lista);
}