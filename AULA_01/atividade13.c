#include <stdio.h>
#include <stdlib.h>

float media (int n, float *v){
	int i;
	float s = 0.0;
	for(i  = 0; i < n; i++){
		s += v[i];
		return s/n;
	}


}

int main(void){
	float v = [10];
	float med;
	int i;

	for (i = 0; i < 10; i++){
		printf("Digite o valor %i", i + 1);
		scanf("%f", &v[i]);	
	}

	med = media (10, v);
	printf("\n Media = %.2f", med);
	getch();
	return 0; 
}