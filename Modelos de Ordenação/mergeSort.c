#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 10000

// Prototipo de Função
void geraNumero(int *vet, int op);
void mergeSort(int *vet, int inicio, int fim);
void imprimirVetor(int *vet);

// Variáveis Globais
int qtd_comparacoes = 0, qtd_trocas = 0;

int main(void) {
	// Variáveis
	int vet1[TAMANHO];
	float tempo_inicial, tempo_final;

	// ORDENADO
	printf("Ordenado:\n");
	geraNumero(vet1,1);
	tempo_inicial = clock();
	qtd_comparacoes = 0, qtd_trocas = 0;
	mergeSort(vet1, 0, TAMANHO-1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
    
	// INVERTIDO
	printf("\nInvertido:\n");
	geraNumero(vet1,2);
	tempo_inicial = clock();
	qtd_comparacoes = 0, qtd_trocas = 0;
	mergeSort(vet1, 0, TAMANHO-1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
	// ALEATORIO
	printf("\nAleatorio:\n");
	geraNumero(vet1,3);
	tempo_inicial = clock();
	qtd_comparacoes = 0, qtd_trocas = 0;
	mergeSort(vet1, 0, TAMANHO-1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
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
        case 2: //Invertidos
            for (i = 0; i < TAMANHO; i++) {
               vet[i] = TAMANHO-i;
            }
            break;
        case 3: // Aleatórios
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = (int) (rand() % TAMANHO);
            }
            break;
    }

}

// Função ordenação merge sort
void mergeSort(int *vet, int inicio, int fim){
	int meio;
	//qtd_trocas++;
	if(inicio < fim){
		meio = inicio + (fim - inicio)/2;
		mergeSort(vet, inicio, meio);
		mergeSort(vet, meio + 1, fim);
		intercala(vet, inicio, fim, meio);
		//qtd_trocas++;
	}
}

void intercala(int x[], int inicio, int fim, int meio){
	int poslivre = inicio;
	int iniciovetor1 = inicio;
	int iniciovetor2 = meio+1;
	int i;
	int aux[TAMANHO];
	//qtd_comparacoes = 0, qtd_trocas = 0;


	while(iniciovetor1 <= meio && iniciovetor2 <= fim){
		 qtd_comparacoes++;
		if(x[iniciovetor1] <= x[iniciovetor2]){
			aux[poslivre] = x[iniciovetor1];
			iniciovetor1++;
			qtd_trocas++;
		} else {
			aux[poslivre] = x[iniciovetor2];
			iniciovetor2++;
			qtd_trocas++; 
		}
		poslivre++; 
	} 
	
	for(i = iniciovetor1; i <= meio; i++){
		aux[poslivre] = x[i];
		qtd_trocas++;
		poslivre++;
	}

	for(i = iniciovetor2; i <= fim; i++){
		aux[poslivre] = x[i];
		qtd_trocas++;
		poslivre++;
	}
	for(i = inicio; i <= fim; i++){
		x[i] = aux[i];
	}

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