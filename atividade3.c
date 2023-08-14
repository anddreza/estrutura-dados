/*Construa um programa que define uma estrutura de peça, que poderá ser usado para outros programas, deverá conter atributos como: código, nome, cor, peso, preço. 
Também uma função entrada de dados e uma função de saídas de dados. */

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	float codigo, peso, preco;
	char nome[50];
}Peca;

Peca insercao(void);
void saida(Peca a[]);

int main(void){
	int i;
	Peca bd[TAM];
	
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd);
	
	return 0;
}

Peca insercao(void){
	Peca a;

	printf("Digite o codigo: ");
	fgets(a.codigo, stdin);
	fflush(stdin);
	getchar();
	
	printf("Digite o nome: ");
	fgets(a.codigo, 50, stdin);
	fflush(stdin);
	getchar();

	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	getchar();

	printf("Digite o preço: ");
	scanf("%f",&a.preco);
	fflush(stdin);
	getchar();

	return a;
}

void impressao(Peca a[]){
	int i;
	
	printf("CODIGO\tNOME\tPESO\tPREÇO\n");
	for(i=0;i<TAM;i++){
		printf("%.2f\t%s\t%.1f\t%.2f\n", a[i].codigo,a[i].nome,a[i].peso, a[i].preco);
	}
}


