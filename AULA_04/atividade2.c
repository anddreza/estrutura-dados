#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(void){
	int n;
	scanf("%i", &n);

	printf("O numero da serie Fibonacci e %i \n", fibonacci(n));

	return 0;
}

int fibonacci(int n){
	if (n == 1|| n==2){
		return 1;

	} else {
		return fibonacci(n - 1)+ fibonacci(n - 2);
	}
	
}