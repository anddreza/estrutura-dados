/*
12.	Faça uma função que calcule a média de uma sequência de valores, 
os valores deverão ser passados por meio de um vetor de referência.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

float calculo(int *n);

int main(void){
	int numeros[TAM], i;
	
	for(i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&numeros[i]);
	}
	
	printf("A media e %f",calculo(numeros));

	return 0;
}

float calculo(int *n){
	int s=0, i;
	
	for(i=0;i<TAM;i++){
		s+=n[i];
	}
	
	return (float)s/TAM;
}
