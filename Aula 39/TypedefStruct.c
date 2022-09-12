#include <stdio.h>

struct tAluno{
	//Utilizando os tipos redefinidos dentro da struct
	int matricula;
	float prova1;
	float prova2;
};
//Redefinindo a struct para encurtar o comando da declaração
typedef struct tAluno tAluno;

int main (void){
	
	/*Declarando a variável do tipo tAluno
	note que com a redefinição agora não é mais necessário escrever struct tAluno*/
	tAluno aluno;
	float media = 0;
	
	printf("Informe o numero da matricula: ");
	scanf("%d",&aluno.matricula);
	
	printf("Informe a nota da primeira prova: ");
	scanf("%f",&aluno.prova1);
	
	printf("Infome a nota da segunda prova: ");
	scanf("%f",&aluno.prova2);
	
	media = (aluno.prova1 + aluno.prova2) / 2;
	
	printf("\nMatricula.........: %d\n",aluno.matricula);
	printf("Media do aluno......: %.2f\n",media);
	
	return 0;
}
