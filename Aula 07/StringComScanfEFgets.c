#include<stdio.h>
int main (void){
	
	char nome[11]; //String é uma variável que armazena uma cadeia de caracteres
	
	printf("Digite Seu nome: ");
	//scanf("%s",nome);  //%s Especifica que irar receber um cadeia de caracteres
	

	fgets(nome,11,stdin); //Leitura da String
	
	printf("O Nome Armazenado foi: %s",nome);
	return 0;
}
