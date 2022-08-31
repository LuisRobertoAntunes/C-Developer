#include <stdio.h>

int main (void){
	
	float limite_min = 5.0, limite_max = 12.0, temperatura;
	
	printf("Informe o valor da temperatura: ");
	scanf("%f",&temperatura);
	
	//Se (temperatura > limite_Max OU temeperatura < limite_min)
	if(temperatura > limite_max || temperatura < limite_min)
		printf("Alerta: Temperatura fora da faiza permitida!!! \n");
	else
		printf("Temperatura OK \n ");
	
	return (0);
}
