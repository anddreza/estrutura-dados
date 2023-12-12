#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int num;
    //Esse *prox é o nó -> é a ligação com os proximos itens na lista
    struct lista *prox;
} LISTA;


int main(void){
    LISTA *inicio = NULL;
    LISTA *fim = NULL;
    LISTA *aux;

    int i;
    
	// entrada de dados na lista
    for (i = 0; i < 3; i++) {
        printf("Digite o numero :");
        LISTA *l = (LISTA*) malloc(sizeof(LISTA));
        //o 'l' acessa a struct, e o num é a propriedade dentro da struct
        //é para acessar o ponteiro 
        scanf("%i",&l->num);
        fflush(stdin);

        //Ele só entra aqui quando i = 0
	if (inicio == NULL) {
            inicio = l;
            fim = inicio;
            l->prox = NULL;
        } else {
            //ele aloca a partir do segundo numero no prox
            l->prox = inicio;
            //o proximo numero sempre será inicio
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
}
