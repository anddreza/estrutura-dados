/*Construa um programa para calcular uma equação de segundo grau, onde x' e x'' deverão ser um ponteiro, imprima o valor de x'e x'' após a execução do programa. */

#include <stdio.h>
#include <math.h>

typedef struct equacao{
	float x1, x2, a, b, c;
}Equacao;

void segundoGrau(Equacao *eq){

	//Aqui é somente para leitura da posição 
	// eq-> a: aqui ele ler a posição de memória 
	float delta = ((eq->b) * (eq->b)) - (4 * (eq->a) * (eq->c));	
	if (delta >= 0) {
	    eq->x1 = ((-eq->b) + sqrt(delta)) / (2 * (eq->a));
	    eq->x2 = ((-eq->b) - sqrt(delta)) / (2 * (eq->a));		
	} else {
		printf("\nRaiz negativa\n");
	}
}

int main() {
	Equacao eq;
	// Aqui ele armazena a informação de cada atributo
	// '&' é para armazenar as informações 
	printf("Digite A: ");
	// Aqui ele ler e armazena o valor de 'a'
	scanf("%f", &eq.a);
	fflush(stdin);
	
	printf("Digite B: ");
	scanf("%f", &eq.b);
	fflush(stdin);
	
	printf("Digite C: ");
	scanf("%f", &eq.c);
	fflush(stdin);
	
	segundoGrau(&eq);
	
	printf("X1: %f\n", eq.x1);
	printf("X2: %f\n", eq.x2);
	
	return 0;
}