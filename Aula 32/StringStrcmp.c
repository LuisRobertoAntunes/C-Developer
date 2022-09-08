#include <stdio.h>
#include <string.h> //Necessário para strcmp

int main (void){
	
	char str1[]="Curso de C";
	char str2[]="Curso de Java";
	int retorno;
	
	retorno = strncmp(str1,str2,10);
	/*
		  0: Conteúdo das strings é igual
		< 0: Conteúdo da str1 é menor do que str2
		> 0: Conteúdo da str1 e maior do que str2
	*/
	
	printf("Retorno = %d \n",retorno);
		
	return 0;
}
