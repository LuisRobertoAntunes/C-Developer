#include<stdio.h>
#define MAX 500

struct dieta{
    char nomeComida[25];
    float peso;
    float calorias;
	
   
  
};
typedef struct dieta Dieta;

Dieta cadastrar();
void exibir(Dieta vet[],int qtde);



int main (){
	
	Dieta a[MAX];
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

Dieta cadastrar(){
	Dieta al;
	
	printf("Digite o Nome da Comida:\n");
	fflush(stdin);
	gets(al.nomeComida);
	
	printf("Digite o Peso da Porcao(g):\n");
	scanf("%f",&al.peso);
	
	printf("Digite a Quantidade de Calorias(Cal) da Porcao:\n");
	scanf("%f",&al.calorias);

	return al;	
	 
}

void exibir(Dieta vet[],int qtde){
	int i;
	for(i=0;i<qtde;i++){
		printf("Nome: %s\n",vet[i].nomeComida);
		printf("Peso da Porcao: %.2fg\n",vet[i].peso);
		printf("Quantidade de Calorias: %.2fCal\n",vet[i].calorias);
	}
}


