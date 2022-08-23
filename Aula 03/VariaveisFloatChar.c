#include <stdio.h>
int main (void){
	
	char letra; //variáveis do tipo char, contém caracteres
	int x; // variáveis para números inteiros
	float salario; // variáveis do tipo float (real) contém decimais
	
	//Atribuindo valores para as variáveis
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	//Saída de dados na tela
	printf("letra = %c \n",letra);
	printf("x = %d \n",x);
	printf("salario = %.2f \n",salario);
	
	// especificadores de tipo:
	// %c para char
	// %d para int
	// %f para float
	
	return 0;
}
