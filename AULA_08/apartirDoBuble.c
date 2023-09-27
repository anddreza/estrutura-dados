#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

typedef struct{
	char nome[50];
	float salario;
}Funcionario;

void entrada(Funcionario *x);
void saida(Funcionario *x);
void ordena(Funcionario *x, char opcao);

int main(void) {
	// Variáveis
	Funcionario bd[TAM];
	entrada(bd);
	ordena(bd, 'a');
	saida(bd);
	
	return 0;
}

void entrada(Funcionario *x){
	int i;
	
    for (i = 0; i <= TAM-2; i++) {
		printf("Digite nome: ");
		fgets(x[i].nome, 50, stdin);
		fflush(stdin);
		printf("Digite o salario: ");
		scanf("%f",&x[i].salario);
		fflush(stdin);
	}
}

void saida(Funcionario *x){
	int i;
	printf("Nome\tSalario\n");
	for(i=0;i<TAM; i++){
		printf("%s\t%.2f\n", x[i].nome, x[i].salario);
	}
}

void ordena (Funcionario *x, char opcao){
	Funcionario aux;
	int n, i, troca;
	
	switch(opcao){
		case 'a': //a) em ordem crescente de salário;
			n = 1;
		    troca = 1;
		
		    while (n <= TAM && troca == 1) {
		        troca = 0;
		        for (i = 0; i < TAM-1; i++) {
		            if (x[i].salario > x[i + 1].salario) {
		                troca = 1;
		                aux = x[i];
		                x[i] = x[i + 1];
		                x[i + 1] = aux;
		            }
		        }
		        n++;
		    }

			break;
		case 'b': //b) em ordem decrescente de salário;
			n = 1;
		    troca = 1;
		
		    while (n <= TAM && troca == 1) {
		        troca = 0;
		        for (i = 0; i < TAM-1; i++) {
		            if (x[i].salario < x[i + 1].salario) {
		                troca = 1;
		                aux = x[i];
		                x[i] = x[i + 1];
		                x[i + 1] = aux;
		            }
		        }
		        n++;
		    }
		
			break;
		case 'c': //c) em ordem alfabética;
			n = 1;
		    troca = 1;
		
		    while (n <= TAM && troca == 1) {
		        troca = 0;
		        for (i = 0; i < TAM-1; i++) {
		            if (strcmp(x[i].nome,x[i + 1].nome)>0) {
		                troca = 1;
		                aux = x[i];
		                x[i] = x[i + 1];
		                x[i + 1] = aux;
		            }
		        }
		        n++;
		    }
			break;
	}
}
