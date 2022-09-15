#include<stdio.h>
#define MAX 50

struct restaurante{
    char nome[25];
    char endereco[25];
    char tipoComida[25];
	float preco;
   
  
};
typedef struct restaurante Restaurante;

Restaurante cadastrar();
void exibir(Restaurante vet[],int qtde);



int main (){
	
	Restaurante a[MAX];
	int i=0,op;
	
	do{
		printf("============== MENU ==============\n");
		printf("1 - Cadastrar: \n");
		printf("2 - Exibir todos Cadastros:\n");
		printf("3 - Sair\n");
		scanf("%i",&op);
		
		switch(op){
			case 1:
					if(i<MAX){
						a[i] = cadastrar();
						i++;
					}else
						printf("Nao ha Mais espaco!\n");
					break;
			case 2:
				if(i!=0)
					exibir(a,i); //A = vetor i= Quatidade de elementos armazenados
				else
					printf("Nao ha dados armazenados!\n");
				break;
			case 3:
				exit(1);
				break;
		}
		system("pause");
        system("cls");
	}while(1);
	
	return 0;
}

Restaurante cadastrar(){
	Restaurante al;
	
	printf("Digite o Nome do Cliente:\n");
	fflush(stdin);
	gets(al.nome);
	
	printf("Digite o Endereco do Cliente:\n");
	fflush(stdin);
	gets(al.endereco);
	
	printf("Digite o Preco Medio da Comida:\n");
	scanf("%f",&al.preco);
	
	printf("Digite o Tipo de Comida:\n");
	fflush(stdin);
	gets(al.tipoComida);

	return al;	
	 
}

void exibir(Restaurante vet[],int qtde){
	int i;
	for(i=0;i<qtde;i++){
		printf("Nome: %s\n",vet[i].nome);
		printf("Endereco: %s\n",vet[i].endereco);
		printf("Preco Medio: %.2f\n",vet[i].preco);
		printf("Tipo de Comida: %s\n\n",vet[i].tipoComida);
        
	}
}


