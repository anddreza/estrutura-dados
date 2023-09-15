#include <stdio.h> 

int main(void) { 

    int x[5]; 
    int i, j, eleito, menor, pos; 

    for (i = 0; i <= 4; i++) { 
        printf("Digite o %i numero: ",i+1); 
        scanf("%i,",&x[i]); 
        fflush(stdin); 
    } 

for (i = 0; i <= 3; i++) { 
        eleito = x[i]; 
        menor = x[i + 1]; 
        pos = i + 1; 
        for (j = i + 2; j <= 4; j++) { 
            if (x[j] < menor) { 
                menor = x[j]; 
                pos = j; 
            } 
        } 

        if (menor < eleito) { 
            x[i] = x[pos]; 
            x[pos] = eleito; 
        } 
    } 

    printf("\n\nEm ordem:\n\n"); 
    for (i = 0; i <= 4; i++) { 
        printf("%i numero: %i\n",i+1,x[i]); 
    } 
    return 0; 
} 