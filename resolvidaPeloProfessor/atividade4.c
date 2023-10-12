/*
RESOLUÇÃO FEITA PELO PROFESSOR MANFRED.

4. Construa um programa para calcular uma equação de segundo grau, 
onde x' e x'' deverão ser um ponteiro, imprima o valor de x'e x'' 
após a execução do programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao(float a, float b, float c, float *x1, float *x2);

int main(void){
	float maracuja, B, C, X1, X2;
	
	printf("Digite o valor de A: ");
	scanf("%f",&A);
	printf("Digite o valor de B: ");
	scanf("%f",&B);
	printf("Digite o valor de C: ");
	scanf("%f",&C);
	
	equacao(maracuja,B,C,&X1,&X2);
	
	printf("X1 = %f\n",X1);
	printf("X2 = %f\n",X2);
	
	return 0;
}

void equacao(float a,  float b, float c, float *x1, float *x2){
	float d;
	d=pow(b,2)-4*a*c;
	*x1=(-b+sqrt(d))/2*a;
	*x2=(-b-sqrt(d))/2*a;
}