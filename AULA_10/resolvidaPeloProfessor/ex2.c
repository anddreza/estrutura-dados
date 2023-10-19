/*
2)	Construa um algoritmo que contenha uma lista 
estática heterogênea para guardar dados cadastrais 
de dez softwares, solicite ao usuário digitar, nome, 
fabricante, tipo de licença e versão.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char nome[50], licenca[50];
	int versao;
}Software;

void entrada (Software *n);
void saida (Software *n);

int main(void){
	Software bd[TAM];
	
	entrada(bd);
	saida(bd);
	
	return 0;
}

void entrada (Software *n){
	int i;
	for(i=0;i<TAM;i++){
		printf("\n --- %i ---\n\n",i+1);
		printf("Digite nome do software: ");
		gets(n[i].nome);
		fflush(stdin);
		printf("Digite a licenca do software: ");
		gets(n[i].licenca);
		fflush(stdin);
		printf("Digite a versao: ");
		scanf("%i",&n[i].versao);
		fflush(stdin);
	}
	
}
void saida (Software *n){
	int i;
	printf("NOME\tLICENCA\tVERSAO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t",n[i].nome);
		printf("%s\t",n[i].licenca);
		printf("%i\n",n[i].versao);
	}
}
