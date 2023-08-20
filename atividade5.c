/*Construa um programa para calcular a área e de um círculo, a área deve ser do tipo de ponteiro. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void areaCirculo(float r, float *a);

int main(void) {
	float area, raio;

	printf("Digite o raio: ");
	scanf("%f", &raio);	
	
	areaCirculo(raio, &area);

	printf("A area e %f\n", area);
	
	return 0; 
}

void areaCirculo(float r, float *a){
	*a = M_PI * (r * r);
}
