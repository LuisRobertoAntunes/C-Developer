#include <stdio.h>

int main (){
	
	int matriz[3][3], i,j;
	
	printf("\nDigite valor para os elementos da matriz \n\n");
	
	for(i = 0; i < 3; i++) //i é o índice da linha da matriz
		for(j = 0; j < 3; j++){ //j é o índice da coluna da matriz
			printf("\nElemento [%d][%d] = ",i,j);
			scanf("%d", &matriz[i][j]);
	}

	printf("\n*************Saida de Dados*************\n\n");
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			printf("\nElemento [%d][%d] = %d",i,j,matriz[i][j]);


	return 0;
}
