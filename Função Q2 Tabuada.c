#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int tabuada(int numero) {
	int resultado;
	int i;
		for(i=1;i<=10;i++){
			printf("\n%i x %i = %i",numero,i,numero*i);
	}	
}	


int main(){
	setlocale(LC_ALL,"");
	
	int numero;
			printf("Digite o número para amostrar a tabuada: ");
				scanf("%i",&numero);
				
		system("cls || clear");
		
		tabuada(numero);
		
	return 0 ;
}
