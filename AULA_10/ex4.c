/*Construa um algoritmo que contenha uma lista dinâmica heterogênea onde o usuário deverá informar quantidade de disciplinas que ele tem e os dados de cada disciplina como: sala, dia da semana, nome disciplina e semestre e depois o algoritmo deve imprimir estes dados em tela.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct lista{
	char sala[20], dia_semana[20], nome_dis[20];
	int semestre;
	struct lista *prox;
} LISTA;

int main(void){

	LISTA *inicio = NULL;
	LISTA *fim = NULL;
	LISTA *aux;
	int i, qtd;

	printf("Digite a quantidade de disciplinas:");   
	scanf("%i",&qtd);
	for (i = 0; i < qtd; i++) {
		LISTA *l = (LISTA*) malloc(sizeof(LISTA));
        printf("Digite a sala :");
		scanf("%s", l->sala);
        fflush(stdin);

		printf("Digite o dia de semana :");
		scanf("%s", l->dia_semana);
        fflush(stdin);

		printf("Digite o nome da disciplina :");
		scanf("%s", l->nome_dis);
        fflush(stdin);

		printf("Digite o semestre :");
		scanf("%i", &l->semestre);
        fflush(stdin);

		if (inicio == NULL){
			inicio = l;
			fim = inicio;
			l->prox = NULL;
		} else {
			l->prox = inicio;
			inicio = l;
		}
	}

	// impressão dos dados da lista
	if (inicio == NULL){
		printf("Lista vazia!!\n");
	}
	else{
		aux = inicio;
		while (aux != NULL){

			printf("%s, ", aux->sala);
			printf("%s\n", aux->dia_semana);
			printf("%s\n", aux->nome_dis);
			printf("%i\n", aux->semestre);
			aux = aux->prox;
		}
	}
}