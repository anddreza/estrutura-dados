/*Construa um programa para calcular a área e de um círculo, a área deve ser do tipo de ponteiro. */

#include <stdio.h>
#include <math.h>

typedef struct circulo{
	float a, r, PI = 3,1415;
}Circulo;

void areaCirculo(Circulo *eq){
	
	if (delta >= 0) {
		float delta = (eq->r) * ((eq->r) * (eq->r));
	} else {
		printf("\nValores negativos\n");
	}
}

int main() {
	Circulo eq;
	printf("Digite A: ");
	scanf("%f", &eq.a);
	fflush(stdin);
	
	return 0;
}