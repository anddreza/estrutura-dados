
typedef struct{
	int codigo;
	char nome[50], cor[50];
	float peso, preco;
}Peca;

void inserir(Peca *a);
void imprimir(Peca *a, int t);

void inserir(Peca *a){
	printf("Digite o codigo: ");
	scanf("%i",&a->codigo);
	fflush(stdin);
	printf("Digite o nome: ");
	gets(a->nome);
	fflush(stdin);
	printf("Digite a cor: ");
	gets(a->cor);
	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f",&a->peso);
	fflush(stdin);
	printf("Digite o preco: ");
	scanf("%f",&a->preco);
}

void imprimir(Peca *a, int t){
	int i;
	for(i=0;i<t;i++){
		printf("%i\t%s\t%s\t%.1f\t%.2f\n",
		a[i].codigo,a[i].nome,a[i].cor,a[i].peso,a[i].preco);
	}
	
}