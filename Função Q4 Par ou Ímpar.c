#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int solucao(int num1){
	
	if(num1 %2==0){
		printf("\nN�mero Par");
	}else{
		printf("\nN�mero �mpar");
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	
	int num1,resultado;
	
	printf("Digite um n�mero:");
		scanf("%i",&num1);
		
	solucao(num1);
	
	
	return 0;
	
}
