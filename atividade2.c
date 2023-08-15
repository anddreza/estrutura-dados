/*Construa um programa que define um tipo novo de dados, para uma estrutura de um animal, deverá conter atributos como: raça, cor, peso e sexo.  E solicite ao usuário do programa 10 espécies e depois imprima em tela.  */


#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char raca[50];
	char cor[50];
	float peso;
	char sexo[50];
}Animal;

Animal insercao(void);
void impressao(Animal a[]);

int main(void){
	int i;
	Animal bd[TAM];
	
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd);
	
	return 0;
}

Animal insercao(void){
	Animal a;
	
	printf("Digite a raça: ");
	fgets(a.raca, 50, stdin);
	fflush(stdin);
	getchar();
	
	printf("Digite a cor: ");
	scanf("%c",&a.cor);
	fflush(stdin);
	getchar();

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

void impressao(Animal a[]){
	int i;
	
	printf("RACA\tCOR\tPESO\tSEXO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t%c\t%.1f\t%c\n",a[i].raca,
		a[i].cor,a[i].peso,a[i].sexo);
	}
}