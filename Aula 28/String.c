#include <stdio.h>
#include <string.h>

int main (void){
	

//  char nome_cliente[7]="Fulano"; //6 posições úteis + 1 posição para terminador '\0'
	char nome_cliente[50]="Fulano de Tal";
	int i;
	int cont = 0;
	
	for(i = 0; nome_cliente[i] != '\0'; i++){
		printf("Valor do elemento %d da string = %c\n",i,nome_cliente[i]);
		cont++;
	}
		
	printf("Quantidade de caracteres da string: %d \n",cont);
	printf("Quantidade de caracteres da string usando strlen: %d \n",strlen(nome_cliente));		

	return 0;
}
