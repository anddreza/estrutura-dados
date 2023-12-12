#include <stdio.h> 

char pilha[7]; 
int i, topo = 0; 

void push(char a){ 
   pilha[topo] = a; 
   topo++;         

} 

void pop(){ 
   topo--; 
   pilha[topo]='\0'; 
} 

void imprime(){ 
   printf("\n"); 
   for (i=6;i>=0;i--){ 
    printf("[ %i ] %c ",i,pilha[i]); 
} 
printf("\n"); 
} 

   

int main(void) { 
    push('a'); 
    imprime(); 

    push('b'); 
    imprime(); 

    push('c'); 
    imprime(); 

    pop(); 
    imprime(); 

    push('d'); 
    imprime(); 

    pop(); 
    imprime(); 

    return 0; 
} 