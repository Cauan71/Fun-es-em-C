#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int converter(int valor){
	int conversao;
	conversao = valor*100;
	return conversao;

}


int main(){
	setlocale(LC_ALL,"");
	
	int valor;
	
	
	printf("Digite um valor em Metros: ");
		scanf("%i",&valor);
		
	system("cls || clear");
	
	converter(valor);
	printf("\n O valor convertido �: %i cent�metros",converter(valor));
	
	return 0;
	
}
