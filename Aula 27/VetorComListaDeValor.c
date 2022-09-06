#include <stdio.h>

int main (void){
	
	//Declarando e atribuindo valores ao vetor
	int i;
	
	//Inicializando o vetor com listas de valores
	int vet[6] = {19,19,19,19,19,19};
	
	//Imprimindo os valores do vetor
	for(i = 0; i <= 5; i++)
		printf("vet[%d] = %d\n",i,vet[i]);
	
	return 0;
}
