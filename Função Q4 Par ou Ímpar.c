#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int solucao(int num1){
	
	if(num1 %2==0){
		printf("\nNúmero Par");
	}else{
		printf("\nNúmero Ímpar");
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	
	int num1,resultado;
	
	printf("Digite um número:");
		scanf("%i",&num1);
		
	solucao(num1);
	
	
	return 0;
	
}
