#include <stdio.h>
/*
	tipo_de_retorno nome_da_funcao (listagem de parametros){
		instru�oes;
		retorno_da_fun��o;
	}
*/

void imprime_cabec(void){
	printf("***************************\n");
	printf("*       Linguagem C       *\n");
	printf("***************************\n");
	return;
}

int main (){
	
	int v1, v2, resultado;
	
	imprime_cabec(); //Chamada da fun��o
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&v1);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&v2);
	
	resultado = v1 * v2;
	printf("Resultado = %d\n",resultado);
	
	
	
	return 0;
}
