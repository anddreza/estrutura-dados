/*
1.	Construa um programa que define uma estrutura de tipo pessoa, 
solicite inserção de dados para a estrutura de tipo pessoa e 
imprime a estrutura tipo pessoa. (NOME, IDADE, PESO, ALTURA, SEXO)
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char nome[50], sexo;
	int idade;
	float peso, altura;
}Pessoa;

Pessoa insercao(void);
void impressao(Pessoa a[]);

int main(void){
	int i;
	Pessoa bd[TAM];
	
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd);

	return 0;
}

Pessoa insercao(void){
	Pessoa a;
	
	printf("Digite nome: ");
	fgets(a.nome, 50, stdin);
	fflush(stdin);

	printf("Digite a idade: ");
	scanf("%i",&a.idade);
	fflush(stdin);
	
	
	printf("Digite a altura: ");
	scanf("%f",&a.altura);
	fflush(stdin);
	
	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	getchar();

	printf("Digite o sexo: ");
	scanf("%c",&a.sexo);
	fflush(stdin);
	getchar();

	return a;
}
void impressao(Pessoa a[]){
	int i;
	
	printf("NOME\tIDADE\tALTURA\tPESO\tSEXO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t%i\t%.1f\t%.1f\t%c\n",a[i].nome,
		a[i].idade,a[i].altura,a[i].peso,a[i].sexo);
	}
}