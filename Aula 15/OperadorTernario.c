#include <stdio.h>

int main(void){
	
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//Condição ? comando para condição Verdadeira : Comando para condição Falsa
	numero >= 0 ? printf("Numero Positivo\n") : printf("Numero Negativo\n");
	
	printf("O novo valor de numero e: %d", numero);
	
	return 0;
}
