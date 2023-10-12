#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10
typedef struct{
	char nome;
	float salario;
}Pessoa;

Pessoa insercao(void);
void impressao(Pessoa a[]);
void bubbleSort(int *vet);

int main(void){
	int i;
	Pessoa bd[TAM];	
	for(i=0;i<TAM;i++){
		printf("---%i---\n",i);
		bd[i]=insercao();
	}
	impressao(bd);
	return 0;

	int vet1[TAM];

	// ORDENADO
	printf("Ordenado:\n");
	Pessoa insercao(void);
	bubbleSort(vet1);

}

Pessoa insercao(void){
	Pessoa a;
	
	printf("Digite nome: ");
	fgets(a.nome, 50, stdin);
	fflush(stdin);

	printf("Digite a idade: ");
	scanf("%f",&a.salario);
	fflush(stdin);
	
	return a;
}

void bubbleSort(int *vet){
	int n=1, troca =1, i, aux;
    while (n <= TAM && troca == 1) {
        troca = 0;
        for (i = 0; i <= TAM-2; i++) {

            if (vet[i] > vet[i + 1]) {
                troca = 1;
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
        n = n + 1;
    }
}





void impressao(Pessoa a[]){
	int i;
	
	printf("NOME\tIDADE\tALTURA\tPESO\tSEXO\n");
	for(i=0;i<TAM;i++){
		printf("%s\t%f\t",a[i].nome,
		a[i].salario);
	}
}

