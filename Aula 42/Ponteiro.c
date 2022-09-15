#include <stdio.h>
#include <conio.h>

int main (){
	/* Valor e a variável que será 
	Apontada pelo ponteiro*/
	int valor = 27;
	
	//Declaração de variável ponteiro
	int *ptr;
	
	//Atribuindo o endereço da variável valor ao ponteiro
	ptr = &valor;
	
	printf("Utilizando ponteiro\n\n");
	printf("Conteudo da variavel valor: %d\n",valor);
	printf("Endereço da variavel valor: %x\n",&valor);
	printf("Conteudo da variavel ponteiro ptr: %x",ptr);
	
	getch();
	
	return 0;
}
