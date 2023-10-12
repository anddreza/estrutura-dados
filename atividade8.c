/*Faça um programa para colocar três números em ordem crescente. Deve ter uma função para fazer a troca dos valores, use uma função usando passagem de parâmetro por referência. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TAM 3

void ordem(int *v, int j);

int main(void){
	int v[TAM], i, j;

	for(i = 0; i < TAM;i++){
		printf("Insira o numero %i: ", i+1);
		scanf("%i", &v[i]);
		fflush(stdin);
	}

	ordem(v, j);

	for(i = 0; i < TAM; i++){
		printf("Ordenação: %i \n", v[i]);

	}
}

void ordem(int *v, int j){
	int i;
	for(i = 0; i < TAM; i++){
		if(v[i] < v[i+1]){
			j = v[0]; 
			v[0] = v[i];
			v[i+1] = j;
		}
		
	}
}