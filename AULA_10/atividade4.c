/* Lista dinâmica exemplo 03*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p; //referencia para proxima lista
}LISTA;

int main(void){
	LISTA *l = NULL;
	int numero;
	
	// entrada
	do{
		printf("Digite numero (-1 para sair): ");
		scanf("%i",&numero);
		if(numero !=-1){
			LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
			//armazena o numero inserido no n 
			novo->n=numero;
			// l = NULL, e p passa a ser NULL
			novo->p=l;
			// l será igual a novo (que é uma lista LISTA *novo = (LISTA*) malloc(sizeof(LISTA))   );
			l=novo;	
		}
	}while (numero != -1);

	
	// saída 
	while(l1!=NULL){
		printf("l    = %p\n",l);
		printf("l->n = %i\n",l1->n);
		printf("l->p = %p\n",l->p);
		l=l->p;
			while(l2!=NULL){
			printf("l    = %p\n",l);
			printf("l->n = %i\n",l2->n);
			printf("l->p = %p\n",l->p);
			l=l->p;
			if(l1->nome == l2->nome)
		}
	}
	
	return 0;
}