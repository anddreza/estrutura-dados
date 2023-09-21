#include <stdio.h> 

void merge(int x[], int inicio, int fim) { 
    int meio; 
    if (inicio < fim) { 
        meio = (inicio + fim) / 2; 
        merge(x, inicio, meio); 
        merge(x, meio + 1, fim); 
        intercala(x, inicio, fim, meio); 
    } 
} 

void intercala(int x[], int inicio, int fim, int meio) { 
    int poslivre = inicio;
    int iniciovetor1 = inicio;
    int iniciovetor2 = meio + 1, i; 
	
    int aux[5]; 
    while (iniciovetor1 <= meio && iniciovetor2 <= fim) { 
        if (x[iniciovetor1] <= x[iniciovetor2]) { 
            aux[poslivre] = x[iniciovetor1]; 
            iniciovetor1++; 
        } else { 
            aux[poslivre] = x[iniciovetor2]; 
            iniciovetor2++; 
        } 
        poslivre++; 
    } 
    for (i = iniciovetor1; i <= meio; i++) { 
        aux[poslivre] = x[i]; 
        poslivre++; 
    } 

    for (i = iniciovetor2; i <= fim; i++) { 
        aux[poslivre] = x[i]; 
        poslivre++; 
    } 

    for (i = inicio; i <= fim; i++) { 
        x[i] = aux[i]; 
    } 
} 


int main(void) { 
    int x[5]; 
    int i, j, eleito, menor, pos; 
    for (i = 0; i <= 4; i++) { 
        printf("Digite o %i numero: ",i+1); 
        scanf("%i,",&x[i]); 
        fflush(stdin); 
    } 

merge(x, 0, 4); 
    printf("\n\nEm ordem:\n\n"); 
    for (i = 0; i <= 4; i++) { 
        printf("%i numero: %i\n",i+1,x[i]); 
    } 
    return 0; 
} 