/*1. Construa um algoritmo que use recursividade para resolver o problema matemático da seria de Pitágoras, sabendo que a série é 1, 3, 6, 10, 15, 21,*/
#include <stdio.h>
#include <stdlib.h>

int pitagoras(int n);

int main(void){
	int n, i;
	scanf("%i", &n);

	for(i = 1; i <= n; i++){
		printf("%i", pitagoras(i));
	}

	return 0; 
}


int pitagoras(int n){
	
	if (n == 1){
		return 1;
	} else {
		return n+pitagoras(n-1);
	}
	
}