/*
11.	Faça uma função que leia um texto e converta este texto 
para maiúscula. O texto deve ser passado para função por 
referência.
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
	int i=0;
	while(t[i]!='\0'){
		if(t[i]>='a' && t[i]<='z'){
			t[i]-=32;
		}
		i++;
	}
}