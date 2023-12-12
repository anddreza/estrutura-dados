/*Usando conceito de recursividade construa uma função em C ANSI, que informar o valor de um termo da Sequência de Pell. A sequência começa com os dois primeiros termos, que são 0 e 1. Cada termo subsequente é duas vezes o termo anterior mais o segundo termo anterior. A fórmula para gerar a sequência é: P(n) = 2 * P(n-1) + P(n-2). Onde P(n) é o n-ésimo termo na sequência de Pell, P(n-1) é o termo anterior e P(n-2) é o segundo termo anterior. A sequência de Pell é 0, 1, 2, 5, 12, 29, 70, 169, ... (2,0)*/

#include <stdio.h>
#include <stdlib.h>

int pell(int n);

int main(void){
	int n, i;
	scanf("%i", &n);

	for(i = 1; i <= n; i++){
		printf("%i \n", pell(n));
	}

}


int pell(int n){
	if ( n == 0 || n == 1){
		return 1;
	} else {
		return 2 * pell(n - 1) + pell(n - 2);   
	}
}