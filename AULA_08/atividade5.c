/*Construa um programa que gere um vetor 1000 números aleatórios mostre os números em tela e depois usando o método de ordenação quick sort ordene este vetor. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 1000

// Prototipo de Função
void geraNumero(int *vet, int op);
void quicksort(int *vet, int ini, int fim);
int partition(int *vet, int ini, int fim);
void imprimirVetor(int *vet);

int main(void) {
	int vet1[TAMANHO];

	printf("Ordenado:\n");
	geraNumero(vet1,1);
	insertSort(vet1);

	return 0;
}

// Função geração de números
void geraNumero(int *vet, int op) {
    int i, j;
    switch (op) {
        case 1: // Ordenados
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break;
    }
}

// Função ordenação quick sort
void quicksort(int *vet, int ini, int fim) { 
    int meio; 
    if (ini < fim) { 
        meio = partition(*vet, ini, fim); 
        quicksort(*vet, ini, meio); 
        quicksort(*vet, meio + 1, fim); 
    } 
} 

int partition(int vet[], int ini, int fim) { 
    int pivo, topo, i; 
    pivo = vet[ini]; 
    topo = ini; 

    for (i = ini + 1; i <= fim; i++) { 
        if (vet[i] < pivo) { 
            vet[topo] = vet[i]; 
            vet[i] = vet[topo + 1]; 
            topo++; 
        } 
    } 
    vet[topo] = pivo; 
    return topo; 
} 


// Função impressão do vetor
void imprimirVetor(int *vet){
	int i;
	for(i=0;i<TAMANHO;i++){
		printf("%i, ",vet[i]);
		if ((i+1)%14 == 0){
			printf("\n");
		}
	}
}
