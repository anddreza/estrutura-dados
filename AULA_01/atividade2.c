/*Construa um programa que define um tipo novo de dados, para uma estrutura de um animal, deverá conter atributos como: raça, cor, peso e sexo.  E solicite ao usuário do programa 10 espécies e depois imprima em tela.  */

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct {
	char raca[50],cor[50], sexo[50];
	float peso;
}Animal;

Animal insercao(void);
//aqui ele está entendendo como um vetor
void impressao(Animal *a);

int main(void){
	int i;
	//base de dados de tamanho 3 determinado acima
	Animal bd[TAM];
	
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	
	impressao(bd);
	
	return 0;
}

Animal insercao(void){
	//Ele vai receber as informações que foram isneridas ali acima
	Animal a;
	
	printf("Digite a raça: ");
	//pegar todas as informações 
	fgets(a.raca, 50, stdin);
	// gets(a.raca)
	fflush(stdin);
	getchar();
	
	printf("Digite a cor: ");
	scanf("%c",&a.cor);
	//gets(a.cor);
	fflush(stdin);
	getchar();

	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	getchar();

	printf("Digite o sexo: ");
	// char int float scanf 
	// pegar somente a primeira letra
	scanf("%c",&a.sexo);
	fflush(stdin);
	getchar();

	return a;
}

void impressao(Animal *a){
	int i;
	
	printf("RACA\tCOR\tPESO\tSEXO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t%s\t%.1f\t%c\n",a[i].raca,
		a[i].cor,a[i].peso,a[i].sexo);
	}
}