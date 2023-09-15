#include <stdio.h>

int main(void){

	int x[5];
	int i, j, eleito;

	for (i = 0; i <= 4; i++){
		printf("Digite o %i numero: ", i + 1);
		scanf("%i,", &x[i]);
		fflush(stdin);
	}

	for (i = 1; i <= 4; i++){
		eleito = x[i];
		j = i - 1;
		while (j >= 0 && x[j] > eleito){
			x[j + 1] = x[j];
			j = j - 1;
		}
		x[j + 1] = eleito;
	}

	printf("\n\nEm ordem:\n\n");
	for (i = 0; i <= 4; i++){
		printf("%i numero: %i\n", i + 1, x[i]);
	}
	return 0;
}