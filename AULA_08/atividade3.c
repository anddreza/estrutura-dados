/*3. Faça um programa que cadastre 10 números reais, ordene-os usando o método selection sort e em seguida encontre o maior número e quantas vezes ele apareceu no vetor. */
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void entrada(float *x);
void saida(float *x);
void ordena(float *x);
void maiorNumero(float *x);

int main(void) {
	// Variáveis
	float bd[TAM];
	entrada(bd);
	printf("Ordenar em ordem crescente\n");
	ordena(bd);

	saida(bd);

	maiorNumero(bd);
	//menorNumero(bd);
}

void entrada(float *x){
	int i;
    for (i = 0; i < TAM; i++) {
		printf("Digite o numero: ");
		scanf("%f",&x[i]);
		fflush(stdin);
	}
}

void saida (float *x){
	int i;
	printf("Numeros são: \n");
	for(i=0;i<TAM;i++){
		printf("%.1f \n", x[i]);	
	}
}

/* void ordena (float *x){
	int i, j, pos;
	float aux = 0.0, menor=0.0;
	for(i = 0; i <= TAM-2; i++){
		aux = x[i];
		menor = x[i + 1];
		pos = i + 1;
		for(j = i + 2; j<= TAM-1; j++){
			if(x[j] < menor){
				menor = x[j];
				pos = j;
			}
		}

		if(x[i + 1] < x[i]){
			x[i] = x[pos];
			x[pos] = aux;
		}
	}
} */
void ordena(float *data) {

    int i, j, min; 
	float temp;
    for (i = 0; i < TAM - 1; i++){
        min = i;
        for (j = i+1; j < TAM; j++){
            if (data[j] < data[min]){
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void maiorNumero(float *x){
		int i, cont = 0;
		float maior;

	for(i = 0; i < TAM; i++){
		//Se a primeira posição for igual a segunda posição atribua a ela ao 'menor' 
		if(i == TAM-1){
			printf("Maior numero é: %.2f ", x[TAM-1]);
			maior = x[TAM-1];
		}

	//Contar quantas vezes esse numero apareceu: 
		if(maior == x[i]){
			cont++;
		}
	}
}