#include <stdio.h> 

typedef struct pilha { 
    int num; 
    struct pilha *prox; 
}PILHA; 

int main(void) { 
    PILHA *topo = NULL; 
    PILHA *aux; 
    int op; 

    do{ 
    	system("cls"); 
        printf("\nMENU DE OPCAO\n"); 
        printf("1 - Inserir na pilha\n"); 
        printf("2 - Consultar toda a pilha\n"); 
        printf("3 - Remover da pilha\n"); 
        printf("4 - Esvaziar a pilha\n"); 
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
                getch(); 
            } 

            if (op == 3) { 
                if (topo == NULL) { 
                    printf("Pilha esta vazia!\n"); 
                } else { 
                    printf("Numero  %i removido", topo->num); 
                    topo = topo->prox; 
                } 
                getch(); 
            } 

            if (op == 4) { 
                if (topo == NULL) { 
                    printf("Pilha esta vazia!\n"); 
                } else { 
                    topo = NULL; 
                    printf("Pilha foi esvaziada\n"); 
                } 
                getch(); 
            } 
        } 
} while (op != 5); 
} 