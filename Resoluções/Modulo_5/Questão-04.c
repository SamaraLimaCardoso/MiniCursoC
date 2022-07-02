/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e  exiba o maior endereço.*/

#include <stdio.h>

int troca_valor(int * , int * );

int main ()
{
	int a = 1, b = 4;

	printf("\n valor de a: %d \n valor de b: %d", a, b);

	
	if(troca_valor(&a, &b))
	{
		printf("\n TROCA REALIZADA COM SUCESSO");
		printf("\n valor de a: %d \n valor de b: %d", a, b);
	}else{
		printf("\n Numeros Iguais");
	}

	return 0;
}
//troca_valor(&a, &b)
int troca_valor(int *Pa, int *Pb){// int *pa = &a
	
	int aux;
	
	aux = *Pa;
	*Pa = *Pb;
	*Pb = aux;

	if(aux == *Pa){
		return 0;
	}else{
		return 1;
	}	
}