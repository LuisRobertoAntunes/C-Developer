#include <stdio.h>

int main(void){
	int n1,n2,resto,r;
	
	printf("\nDigite o Primeiro um Numero: ");
	scanf("%d",&n1);
	
	printf("\nDigite o Segundo Numero: ");
	scanf("%d",&n2);
	
	r = n1 / n2;
	printf("\nResultado da divisao inteira de %d / %d = %d \n", n1,n2,r);
	
	resto = n1 % n2;
	printf("\nResto da divisao = %d",resto);
	
	return 0;
}
