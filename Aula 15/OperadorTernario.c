#include <stdio.h>

int main(void){
	
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//Condi��o ? comando para condi��o Verdadeira : Comando para condi��o Falsa
	numero >= 0 ? printf("Numero Positivo\n") : printf("Numero Negativo\n");
	
	printf("O novo valor de numero e: %d", numero);
	
	return 0;
}
