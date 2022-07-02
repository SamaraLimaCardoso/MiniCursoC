/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e  exiba o maior endereço.*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, *end_A, *end_B;

	end_A = &a;
	end_B = &b;
	
	printf("\n%d\n%d", &a, &b);
	
	if(end_A>end_B){
		printf("\n O endereco da variavel A eh maior, sendo ela: %d", end_A);
	}else{
		printf("\n O endereco da variavel B eh maior, sendo ela: %d", end_B);
	}

	return 0;
}
