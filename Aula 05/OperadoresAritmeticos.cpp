#include<stdio.h>

int main(void){
	int valor1, valor2;
	int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
	
	printf("Testando operadores Aritmeticos \n\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&valor2);
	
	resp_soma = valor1 + valor2;
	printf("\nSoma = %d", resp_soma);
	
	resp_subtracao = valor1 - valor2;
	printf("\nSubtracao = %d",resp_subtracao);
	
	resp_multiplicacao = valor1 * valor2;
	printf("\nMultiplicacao = %d", resp_multiplicacao);
	
	resp_divisao = valor1 / valor2;
	printf("\nDivisão = %d", resp_divisao);
	
	return 0;	
}
