#include <stdio.h>
int main (void){
	
	char letra; //vari�veis do tipo char, cont�m caracteres
	int x; // vari�veis para n�meros inteiros
	float salario; // vari�veis do tipo float (real) cont�m decimais
	
	//Atribuindo valores para as vari�veis
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	//Sa�da de dados na tela
	printf("letra = %c \n",letra);
	printf("x = %d \n",x);
	printf("salario = %.2f \n",salario);
	
	// especificadores de tipo:
	// %c para char
	// %d para int
	// %f para float
	
	return 0;
}
