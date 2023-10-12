/*Construa um algoritmo que contenha uma lista estática homogênea para guardar seis números reais, solicite ao usuário os números e apresente para ele a média dos números.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){


    // variáveis primitiva em um vetor
    int i, lista[6], soma = 0;
	float media;
        
    for (i=0;i<6;i++){
        printf("Digite o numero %i o da lista: ",i+1);
        scanf("%i", &lista[i]);
        fflush(stdin);
    }

    for (i=0;i<6;i++){
        printf("%i, \n",lista[i]);
		soma = soma + lista[i];
	}

	media = soma / 6;
	printf("%.2f,  \n", media);

	return 0;	
}
