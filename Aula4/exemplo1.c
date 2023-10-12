#include <stdio.h>
#include <stdlib.h>

int fatorial1(int n);
int fatorial2(int n);

int main(void){

	int numero;
	printf("Digite numero: ");
	scanf("%i", &numero);

	printf("O fatorial1 e %i\n", fatorial1(numero));
	printf("O fatorial2 e %i\n", fatorial2(numero));
	
	return 0;
}

int fatorial1(int n){
	int i, s=1;

	for(i=n;i>=1;i--){
		s*=i;
	}
	
	return s;
}

int fatorial2 (int n){
	if (n==1){
		return 1;
	}else{
		return n*=fatorial2(n-1);
	}
}