#include <stdio.h>
#include <stdlib.h>
//A construção do meu dado estruturado entre a biblioteca e a main

#define TAM 1
// Entrada de dados 
// Dado estruturado 
typedef struct{
	int idade;
	char nome[50];
}Pessoa; // Todas as letras serão maiusculas 

//struct Pessoa{
//	int idade;
//	char nome[50];
//}

int main(void){
	// variavéis locais
	//struct 
	Pessoa alunos[TAM];
	int i; 

	// Entrada de dados 
	for(i = 0; i < TAM; i++){
		printf("\n--- %i ---\n\n", i);
		printf("Digite o nome: ");
		gets(alunos[i].nome);
		fflush(stdin);
		printf("Digite a idade: ");
		scanf("%i", &alunos[i].idade);
		fflush(stdin);

}
	
	// Saída de dados 
	printf("\nNOME\tIDADE\n");
	for(i = 0; i < TAM; i++){
		printf("%s\t%i\n", alunos[i].nome, alunos[i].idade);
	}

	return 0; 
}

