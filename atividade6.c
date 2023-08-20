/*Construa um programa que contém duas variáveis inteiras, e cada uma destas variáveis deverá ter um valor atribuído nelas, através de uma entrada de dado do usuário. Também elaborem no mesmo programa três funções, que deveram usar o conceito de ponteiro para manipular a passagem dos dados para as funções. As funções deverão ter as seguintes funcionalidades: a soma das duas variáveis, a diferença entre as duas variáveis e a multiplicação das duas variáveis. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void conta(float *a, float *b, float *r, float *r2, float *r3);

int main(void){
	float n, n2, r, r2, r3;
	printf("Digite o numero 1: ");
	scanf("%f", &n);
	fflush(stdin);

	printf("Digite o numero 2: ");
	scanf("%f", &n2);

	conta(&n, &n2, &r, &r2, &r3);

	printf("Soma %f \n", r);
	printf("Soma %f \n", r2);
	printf("Soma %f \n", r3);


	return 0;

}

void conta(float *a, float *b, float *r, float *r2, float *r3){
	 *r = *a + *b; 
	 *r2 = *a - *b;
	 *r3 = *a * *b;

}