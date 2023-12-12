/*Faça um algoritmo que localize um termo em uma pilha estática homogenia, lembre-se de usar o conceito de pilha para fazer este algoritmo, devem ser desempilhados os ternos para chegar ao termo desejado. */

#include <stdio.h> 
#include <stdlib.h>

typedef struct pilha { 
    int num; 
    struct pilha *prox; 
}PILHA; 

int encontrar(PILHA *top, int target);
int main(void) { 
    PILHA *topo = NULL; 
    PILHA *aux; 
    int op; 

    do{ 
    	system("cls"); 
        printf("\nMENU DE OPCAO\n"); 
        printf("1 - Inserir na pilha\n"); 
        printf("2 - Consultar toda a pilha\n"); 
        printf("3 - Consulte um valor da lista\n"); 
      //  printf("4 - Esvaziar a pilha\n"); 
        printf("5 - Sair\n"); 
        printf("Digite sua opcao: "); 
        scanf("%i",&op); 
        fflush(stdin); 

        if (op < 1 || op > 5) { 
            printf("Opcao invalida!!\n"); 
        } else { 

            if (op == 1) { 
                printf("Digite o numero a ser inserido na pilha: "); 
                PILHA *novo = (PILHA*) malloc(sizeof(PILHA)); 
                scanf("%i", &novo->num); 
                fflush(stdin); 
                novo->prox = topo; 
                topo = novo; 
                printf("Número inserido na pilha\n"); 
            } 

            if (op == 2) { 
                if (topo == NULL) { 
                    printf("Pilha esta vazia!\n"); 
                } else { 
                    printf("\nConsultado a pilha\n"); 
                    aux = topo; 
                    while (aux != NULL) { 
                        printf("%i ",aux->num); 
                        aux = aux->prox; 
                    } 
                } 
                getchar(); 
            } 

            if (op == 3) { 
                if (topo == NULL) { 
                    printf("Pilha esta vazia!\n"); 
                } else {
					aux = topo; 
					while (aux != NULL) { 
						int opc;
						aux = aux->prox; 
						printf("Qual numero você deseja encontrar: %i", &opc);
					    	if (opc == topo || opc == aux){
								printf("O número -- %i -- foi encontrado", opc);
							}
                    	} 
					}
                getchar(); 
            } 

            if (op == 4) { 
                if (topo == NULL) { 
                    printf("Pilha esta vazia!\n"); 
                } else { 
                    topo = NULL; 
                    printf("Pilha foi esvaziada\n"); 
                } 
                getchar(); 
            } 
        } 
	} while (op != 5); 
} 