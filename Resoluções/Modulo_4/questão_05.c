#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int num); 

int main() {
	
	int i, num, resultado;
	
	setlocale(LC_ALL, "");
	
	printf("\nDigite um número inteiro e positivo: ");
	scanf("%d", &num);
	
	printf("\n##########################################################################");
	printf("\n A sequencia de fibonacci até o numero digitado, %d, é", num);
	printf("\n##########################################################################\n\n");
	
	for(i=1; i < num; i++){
		
		resultado = fibonacci(i);
		printf("\t%d", resultado);
	}
	
	return 0;		
}

int fibonacci(int num) {
	
	int resultado;
	
	if(num==1 || num==2){	
		resultado = 1;
	}
	else{
		resultado = fibonacci(num-1)+ fibonacci(num-2);
	}
	
	return resultado;
}