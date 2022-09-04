#include <stdio.h>

int main (void){
	
	int contador; //variável de controle do loop
	
	for(contador = 1; contador <= 100; contador++){
		printf("%d ",contador);
	}
	
	return 0;
}

/*
	for(valor_inicial; condição_final; valor_incremento){
		instruções;
	}
*/
