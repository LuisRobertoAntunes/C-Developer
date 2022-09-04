#include <stdio.h>

int main (void){
	
	float vteste;
	
	printf("--- Tipo ---|--- BYTES ---\n");
	printf("char........: %d bytes\n", sizeof(char));
	printf("short.......: %d bytes\n", sizeof(short));
	printf("int.........: %d bytes\n", sizeof(int));
	printf("long........: %d bytes\n", sizeof(long));
	printf("float.......: %d bytes\n", sizeof(float));
	printf("double......: %d bytes\n", sizeof(double));
	printf("long double.: %d bytes\n", sizeof(long double));
	printf("\nO tamanho de vteste e.....: %d \n\n",sizeof vteste);
	

	return 0;
}

/*
	O operador sizeof permite retorna a quantidade de mem�ria alocada (em bytes)
	por um tipo de dados, ou por uma determinada vari�vel.
	O valor retornado pode variar com a arquitetura da m�quina que est� sendo utilizada.
	O sizeof pode ser usado de duas maneiras:
		sizeof nome_da_variavel
		sizeof (nome_do_tipo)
*/
