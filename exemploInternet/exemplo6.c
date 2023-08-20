#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[5];
	int i;

	for(i = 0; i < 5; i++){
		scanf("%d", &vet[i]);
	}

	//Ao declarar um novo ponteiro e apontá-lo para a primeira posição de um vetor, é possível acessar todas as posições daquele vetor

	int *pont = vet;

	printf("\n");
	for(i = 0; i <5; i++){
		printf("%d\n", pont[i]);
	}

	return 0;

}