//Exemplo strcat - concatenar Strings
#include <stdio.h>
#include <string.h>

int main (void){
	
	char str[11]="Curso";
	
	strcat(str," de C");
	//Concatena a string " de C" com o conteúdo da string str

	printf("str = %s", str);
	//Será exibido curso de C
	
	return 0;
}

