/*
4)	Construa um algoritmo que contenha uma lista 
dinâmica heterogênea onde o usuário deverá informar 
quantidade de disciplinas que ele tem e os dados de 
cada disciplina como: sala, dia da semana, 
nome disciplina e semestre e depois o algoritmo 
deve imprimir estes dados em tela.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
	char sala[30], semana[30], nome[50], semestre[30];
}Disciplina;

typedef struct lista{
	Disciplina n;
	struct lista *p;
}LISTA;

Disciplina entrada_disciplina(void);
LISTA* entrada_lista(LISTA *n, Disciplina l);
void saida_disciplina(Disciplina n);
void saida_lista(LISTA *n);

int main (void){
	char op;
	LISTA *l = NULL;
	
	do{
		system("cls");
		printf("1 - Adicionar\n");
		printf("2 - Listar\n");
		printf("3 - Sair\n");
		printf("\nDigite uma opcao: ");
		scanf("%c",&op);
		fflush(stdin);
		
		switch(op){
			case '1':
				system("cls");
				l=entrada_lista(l,entrada_disciplina());
				printf("Dados gravados na lista\n");
				break;
			case '2':
				saida_lista(l);
				break;
			case '3':
				break;
			default:
				printf("Erro! Nao tem esta opcao\n");
		}
		printf("Pressione qualquer tecla");
		getch();
	}while(op!='3');
	
	return 0;
}

Disciplina entrada_disciplina(void){
	Disciplina n;
	
	printf("Digite a sala: ");
	//gets(n.sala);
	fgets(n.sala,30,stdin);
	fflush(stdin);
	printf("Digite a semana: ");
	gets(n.semana);
	fflush(stdin);
	printf("Digite o nome da disciplina: ");
	gets(n.nome);
	fflush(stdin);
	printf("Digite o semestre: ");
	gets(n.semestre);
	fflush(stdin);
	
	return n;
}

LISTA* entrada_lista(LISTA *l, Disciplina n){
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
	novo->n=n;
	novo->p=l;
	return novo;
}

void saida_disciplina(Disciplina n){
	printf("%s\t",n.sala);
	printf("%s\t",n.nome);
	printf("%s\t",n.semana);
	printf("%s\n",n.semestre);
}

void saida_lista(LISTA *l){
	system("cls");
	printf("SALA\tNOME\tSEMANA\tSEMESTRE\n\n");
	
	while(l!=NULL){
		//printf("%\t",n->n->sala);
		saida_disciplina(l->n);
		l=l->p;
	}
}

