#include <stdio.h>

int main (void){

	char conceito;//Vari�vel do  tipo char armazanea um �nico caractere na mem�ria
	float nota;
	int numero;

	printf("Informe o conceito do aluno: ");
	scanf("%c",&conceito); //O & significa endere�o de mem�ria da vari�vel Conceito

	printf("Informe a nota do aluno: ");
	scanf("%f",&nota);

	printf("Informe o numero de matricula do aluno: ");
	scanf("%d",&numero);

	printf("\nMatricula: %d \n",numero);
	printf("Conceito: %c \n",conceito);
	printf("Nota: %.1f \n",nota);


	return 0;
}
