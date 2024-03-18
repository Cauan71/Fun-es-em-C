#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int mediar(int nota1,int nota2){
	int media;
	media = (nota1+nota2)/2;
	return media;
}

void verificarSituacao(media){
	if(media>=7){
		printf("\nAprovado!!");
	}else{
		printf("\nReprovado!!");
	}
}

int main(){
	
	setlocale(LC_ALL,"");
	
	int nota1,nota2, media;
	
	
	printf("Digite a primerira Nota: ");
		scanf("%i",&nota1);
	
	printf("Digite a Segunda Nota: ");
		scanf("%i",&nota2);
	
	media =mediar(nota1,nota2);
	
	printf("\nMédia do Aluno: %i",media);
	verificarSituacao(media);
	
	return 0;
	
}

