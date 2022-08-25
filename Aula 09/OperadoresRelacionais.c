#include<stdio.h>


int main (void){
	int x = 10, y = 5, z = 7, k = 7;
	
	printf("Os operadores relacionais sao usado para fazer comparacoes\n");
	printf("Quando o resultado da comparacao for falso retornam 0 (zero)\n");
	printf("Quando o resultado da comparacao for verdadeiro retornam 1 (um)\n");
	
	printf("\nValor de x = %d \n",x);
	printf("Valor de y = %d \n",y);
	printf("Valor de z = %d \n",z);
	printf("Valor de k = %d \n",k);
	
	printf("\nExemplo 1: x > y : %d", x > y); //Retorna 1 pois é VERDADEIRO
	printf("\nExemplo 2: x < y : %d", x < y); //Retorna zero pois é FALSA
	
	printf("\nExemplo 3: z == k : %d", z == k);	//Retorna 1 pois e VERDADEIRO
	printf("\nExemplo 4: z != k : %d", z != k);	//Retorna zero pois é FALSA
	
	printf("\nExemplo 5: z >= x : %d", z >= x);	//Retorna zero pois é FALSA
	printf("\nExemplo 6: z <= k : %d ", z <= k);//Retorna 1 pois e VERDADEIRO
	
	
	
	return 0;
}
