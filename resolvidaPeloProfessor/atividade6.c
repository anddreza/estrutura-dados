/*
6. Construa um programa que contém duas variáveis inteiras, 
e cada uma destas variáveis deverá ter um valor atribuído nelas, 
através de uma entrada de dado do usuário. Também elaborem no mesmo 
programa três funções, que deveram usar o conceito de ponteiro 
para manipular a passagem dos dados para as funções. As funções 
deverão ter as seguintes funcionalidades: 
a soma das duas variáveis, 
a diferença entre as duas variáveis 
e a multiplicação das duas variáveis.
*/
#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b);
void subt(int *a, int *b);
void mult(int *a, int *b);

int main(void){
	int n1, n2;
	
	printf("Digite N1: ");
	scanf("%i",&n1);
	printf("Digite N2: ");
	scanf("%i",&n2);
	
	soma(&n1,&n2);
	subt(&n1,&n2);
	mult(&n1,&n2);
	
	return 0;
}

void soma(int *a, int *b){
	int r = *a+*b;
	printf("R = %i\n",r);
}
void subt(int *a, int *b){
	printf("R = %i\n",*a-*b);
}

void mult(int *a, int *b){
	int r;
	r=(*a)*(*b);
	printf("R = %i\n",r);
}
