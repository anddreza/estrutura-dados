#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct{
	//propriedades da struct
	int numero;
}Programa;

void entrada(Programa *x);
void saida(Programa *x);
void ordena(Programa *x);
void menorNumero(Programa *x);

int main(void) {
	// Variáveis
	Programa bd[TAM];
	entrada(bd);
	printf("Ordenar em ordem crescente\n");
	ordena(bd);
	saida(bd);
	menorNumero(bd);
}

void entrada(Programa *x){
	int i;
    for (i = 0; i <= TAM; i++) {
		printf("Digite o numero: ");
		scanf("%i",&x[i].numero);
		fflush(stdin);
	}
}

void saida (Programa *x){
	int i;
	printf("Numeros são: \n");
	for(i=0;i<=TAM;i++){
		printf("%i \n", x[i].numero);	
	}
}

void ordena (Programa *x){
	int i, j, aux;
	for(i = 1; i <= TAM; i++){
		aux = x[i].numero;
		j = i - 1;
		while(j >= 0 && x[j].numero > aux){
			x[j+1].numero = x[j].numero;
			j = j - 1;
		}
		x[j+1].numero = aux;
	} 
}

void menorNumero(Programa *x){
	
	int i, menor, maior, cont = 0;

	for(i = 0; i <= TAM; i++){
		//Se a primeira posição for igual a segunda posição atribua a ela ao 'menor' 
		if(i == 0){
			printf("Menor numero é: %i ", x[0].numero);
			menor = x[0].numero;
		}

	//Contar quantas vezes esse numero apareceu: 
		if(menor == x[i].numero){
			cont++;
		}

/* 		

		if(x[i].numero < x[i + 1].numero){
			menor = x[i].numero;
		}

		if(x[i].numero > x[i + 1].numero){
			maior = x[i].numero;
		} */
	}
	printf("O menor apareceu %i \n", cont); 
/* 	printf("Maior é %i \n", maior);
	printf("Menor é %i \n", menor);
	*/

}