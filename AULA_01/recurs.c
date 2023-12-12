#include <stdlib.h>

//1. criação da lista vazia
void CriarLista(Lista *L){
	L = malloc(sizeof(Lista));
	L-> nelem = 0;
	L-> head = NULL;
}

//2. inserção do primeiro elemento
void Insere_Prim(LISTA *L, Tipo_elem elem){
	Rec *p;
	p = malloc(sizeof(Rec));
	p-> elem = elem;
	p-> lig=NULL;
	
	L->head = p;
	L->nelem++;
}

//3. inserção no inicio de uma lista
void Insere_Inicio(Lista *L, Tipo_elem elem){
	Rec *p;
	p = malloc(sizeof(Rec));
	p-> elem = elem;
	p-> lig = L->head;
	L-> head = p;
	L->nelem++;
}

//4. Acesso a primeiro elemento da lista
Tipo_elem Primeiro(Lista *L){
	return L->head->elem;
}