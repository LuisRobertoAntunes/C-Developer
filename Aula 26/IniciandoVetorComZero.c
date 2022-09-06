#include <stdio.h>

int main (void){
	
	int vetor[50], i;
	
	//Inicializando o vetor com zeros 
	for(i = 0; i <= 49; i++){
		vetor[i] = 0;
		printf("vetor[%d] = %d\n", i,vetor[i]);
	}
	
	return 0;
}
