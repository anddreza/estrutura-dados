/*
4. Faça um programa que cadastre 20 palavras em um vetor, ordene-os usando o método merge sort, em 
seguida encontre as palavras que começam com vogais e mostre quais são elas.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

typedef struct{
	char in[30];
}Palavra;

void entrada(Palavra *x);
void saida(Palavra *x);
void merge(Palavra *x, int inicio, int fim);
void intercala(Palavra *x, int inicio, int fim, int meio);
void vogal(Palavra *x);

int main (void){
	Palavra bd[TAM];
	
	entrada(bd);
	merge(bd,0,TAM-1);
	saida(bd);
	
	return 0;
}

void entrada(Palavra *x){
	int i;
	for(i=0;i<TAM;i++){
		printf("Digite %i palavra: ",i+1);
		gets(x[i].in);
		fflush(stdin);
	}
}

void saida(Palavra *x){
	int i;
	for(i=0;i<TAM;i++){
		printf("[%i] = %s\n",i,x[i].in);
	}
}

void merge(Palavra *x, int inicio, int fim){
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        merge(x, inicio, meio);
        merge(x, meio + 1, fim);
        intercala(x, inicio, fim, meio);
    }
}

void intercala(Palavra *x, int inicio, int fim, int meio){
    int poslivre = inicio, iniciovetor1 = inicio, iniciovetor2 = meio + 1, i;
    Palavra aux[TAM];
    while (iniciovetor1 <= meio && iniciovetor2 <= fim) {
        if (strcmp(x[iniciovetor1].in, x[iniciovetor2].in) <= 0) {
            strcpy(aux[poslivre].in, x[iniciovetor1].in);
            iniciovetor1++;
        } else {
            strcpy(aux[poslivre].in,x[iniciovetor2].in);
            iniciovetor2++;
        }
        poslivre++;
    }
    for (i = iniciovetor1; i <= meio; i++) {
        strcpy(aux[poslivre].in, x[i].in);
        poslivre++;
    }
    for (i = iniciovetor2; i <= fim; i++) {
        strcpy(aux[poslivre].in, x[i].in);
        poslivre++;
    }
    for (i = inicio; i <= fim; i++) {
        strcpy(x[i].in,aux[i].in);
    }
}

