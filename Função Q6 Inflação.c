#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int inflacionar(float preco){
	
	
	
	if(preco<100){
		preco = preco*1.1;
		
	}else{
		preco = preco*1.2;
		
	}
	return preco;
	
	
}
int main(){

	setlocale(LC_ALL,"");
	
		
	float preco,resultado;
	
	
	printf("Digite o preço pago: ");
		scanf("%f",&preco);
		
	resultado = inflacionar(preco);
	
	
	
	printf("\nO preço Inflacionado do produto é: %f",resultado);
	
	return 0;
}
