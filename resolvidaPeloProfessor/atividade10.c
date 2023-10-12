/*
10.	Faça uma função que leia um nome, converta o primeiro 
caractere deste nome para maiúscula. O nome deve ser passado 
para função por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void converta(char *t);

int main(void){
	char nome[50];
	
	printf("Digite o nome: ");
	gets(nome);
	
	converta(nome);
	
	printf("O nome e %s",nome);
	
	return 0;
}

void converta(char *t){
	if(t[0]>='a' && t[0]<='z'){
		t[0]-=32;
	}
}