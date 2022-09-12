#include <stdio.h>

//Usando struct dentro de struct

struct tp_endereco{
	char rua [40];
	int numero;
	char bairro[40];
	char cidade[40];
	char estado[3];
	int cep;
};

//Criando a struct
struct tp_data_nascimento{
	int dia;
	int mes;
	int ano;
};//não associei nenhuma var à struct ainda, isto será feito dentro da proxima struct

struct cadastro_cliente{
	char nome_cliente[40];
	int telefone;
	
	//Declarando variavel associada à struct tp_endereco
	struct tp_endereco endereco;
	
	//Declarando variavel associada à struct data_nascimento
	struct tp_data_nascimento data_nascimento;
}
cad_cliente[2];

//Programa inicial
int main (){
	
	int i;
	
	printf("\n\n---------- Cadastro de clientes ----------\n\n");
	
	//Armazena os dados do cadastro dentro da struct cad_cliente
	for(i = 0; i < 2; i++){
		
		printf("\n\nNome do cliente..............: ");
		fflush(stdin);
		gests(cad_cliente[i].nome_cliente);
		
		printf("\nDigite o telefone do cliente...: ");
		scanf("%d",&cad_cliente[i].telefone);
		
		printf("\nDigite a rua ..................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.rua);
		
		printf("\nDigite o numero ...............: ");
		scanf("%d",&cad_cliente[i].endereco.numero);
		
		printf("\nBairro.........................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.bairro);
		
		printf("\Cidade.........................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.cidade);
		
		printf("\nEstado.........................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.estado);
		
		printf("\nDigite o CEP...................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.cep);
		
		printf("\nDia de nascimento..............: ");
		scanf("%d",&cad_cliente[i].data_nascimento.dia);
		
		printf("\nMes de nascimento..............: ");
		scanf("%d",&cad_cliente[i].data_nascimento.mes);
		
		printf("\nAno de nascimento..............: ");
		scanf("%d",&cad_cliente[i].data_nascimento.ano);				
		
		
	}//Fim da coleta de dados
	
	printf("\n\n---------- Dados dos clientes ----------\n\n");
	
	//Percorrer o vetor de struct cad_cliente
	
	for( i = 0; i < 2; i++){
		
		printf("\n Nome ..................: %s",cad_cliente[i].nome_cliente);
		printf("\n Rua ...................: %s",cad_cliente[i].endereco.rua);
		printf("\n Numero ................: %d",cad_cliente[i].endereco.numero);
		printf("\n Bairro ................: %s",cad_cliente[i].endereco.bairro);
		printf("\n Cidade ................: %s",cad_cliente[i].endereco.cidade);
		printf("\n Estado ................: %s",cad_cliente[i].endereco.estado);
		printf("\n Cep ...................: %s",cad_cliente[i].endereco.cep);
		
		printf("\n dia de nasc: %d",cad_cliente[i].data_nascimento.dia);
		printf("\n mes de nasc: %d",cad_cliente[i].data_nascimento.mes);
		printf("\n ano de nasc: %d",cad_cliente[i].data_nascimento.ano);
		
	}
	
	return 0;
}
