/* Exercício:
	Criar um vetor denominado A com 10 posições do tipo int, preencher o vetor recebendo dados
	via teclado e multiplicar o conteúdo de cada elemento do vetor A por 10 armazenando
	o resultado desta multiplicação em outro vetor denominado B.
*/

#include <stdio.h>

int main (void){
	
	int A[10], B[10], i;
	
	//Atribuindo valores ao Vetor A
	for(i = 0; i < 10; i++){
		printf("Digite o valor da posicao vetor[%d]\n",i);
		scanf("%d",&A[i]);
	}
	
	printf("\nValores armazenados no Vetor A\n");
	
	//Imprime os valores do Vetor A
	for(i = 0; i < 10; i++)
		printf("A[%d] = %d\n", i,A[i]);
	
	printf("\nResultado da Multiplicação do Vetor A por 10\n");
	
	//Imprime os valores do Vetor B
	for(i = 0; i < 10; i++){
		B[i] = A[i] * 10;
		printf("B[%d] = %d\n",i,B[i]);
	}
		
	
	
	return 0;
}
