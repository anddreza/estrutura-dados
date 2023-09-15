#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 10000

// Prototipo de Função
void geraNumero(int *vet, int op);
void selectSort(int *vet);
void imprimirVetor(int *vet);

// Variáveis Globais
int qtd_comparacoes, qtd_trocas;

int main(void) {
	// Variáveis
	int vet1[TAMANHO];
	float tempo_inicial, tempo_final;

	// ORDENADO
	printf("Ordenado:\n");
	geraNumero(vet1,1);
	tempo_inicial = clock();
	selectSort(vet1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
    
	// INVERTIDO
	printf("\nInvertido:\n");
	geraNumero(vet1,2);
	tempo_inicial = clock();
	selectSort(vet1);
	tempo_final = clock() - tempo_inicial;
	
	printf("\nQuantidade de comparacoes: %i\n",qtd_comparacoes);
    printf("Quantidade de trocas: %i\n",qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f\n",tempo_final/1000);
	
	// ALEATORIO
	printf("\nAleatorio:\n");
	geraNumero(vet1,3);
	tempo_inicial = clock();
	selectSort(vet1);
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

// Função ordenação select sort
void selectSort(int *vet){
	int i, j, aux, menor, pos;
    
	qtd_trocas = 0; qtd_comparacoes = 0;
	//TAMANHO -2 ainda não definido
	for(i = 0; i <= TAMANHO-2; i++){
		// A primeira posição do i, que será zero nesse caso
		aux = vet[i];
		// A segunda posição do i, que será i + 1
		menor = vet[i + 1];
		pos = i + 1;
		for(j = i + 2; j<= TAMANHO; j++){
			if(vet[j] < menor){
				menor = vet[j];
				pos = j;
			}
			qtd_comparacoes++;
		}

		if(menor < aux){
			vet[i] = vet[pos];
			vet[pos] = aux;
			qtd_trocas++;	
		}
		qtd_trocas++;
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

