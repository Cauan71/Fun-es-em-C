#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

	int resultado(int n1,int n2){
	int media;
	media = (n1+n2)/2;
	return media;

}

int main(){
	setlocale(LC_ALL,"");
	
	int n1,n2,media;
	
	printf("\nDigite a primeira nota: ");
		scanf("%i",&n1);
		
	system("clear || cls");
	
	printf("\nDigite a segunda nota: ");
		scanf("%i",&n2);	
	system("clear || cls");
	media = resultado(n1,n2);
	
	
	printf("Média: %i",media);
	
	return 0;
	
}
