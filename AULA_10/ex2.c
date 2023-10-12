/*Construa um algoritmo que contenha uma lista estática heterogênea para guardar dados cadastrais de dez softwares, solicite ao usuário digitar, nome, fabricante, tipo de licença e versão.*/

#include <stdio.h>
#include <stdlib.h>
typedef struct lista {
    char nome[20];
    char fabricante[20];
	int licenca, versao;
}Lista;

int main(void){
    Lista l[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Digite o %i o nome do software: ",i+1);
        scanf ("%s", l[i].nome);
        fflush(stdin);
        printf("Digite a %i o nome da fabricante: ", i+1);
        scanf("%i", l[i].fabricante);
		fflush(stdin);
		printf("Digite o %i o número da licença: ",i+1);
        scanf ("%i", l[i].licenca);
        fflush(stdin);
		printf("Digite o %i o número da versão: ",i+1);
        scanf ("%i", l[i].versao);
        fflush(stdin);
    }
    for (i = 0; i < 2; i++) {
        printf("%s\n, ",l[i].nome);
        printf("%s\n",l[i].fabricante);
		printf("%i\n",l[i].licenca);
		printf("%i\n",l[i].versao);
    }
}
