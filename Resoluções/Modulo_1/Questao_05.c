//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Questão 05. Leia um número inteiro e imprima a soma do sucessor de seu triplo
	com o antecessor de  seu dobro.
	*/

	int num_inteiro, sucessor, antecessor, soma;

	printf("Digite um numero Inteiro: ");
	scanf("%d", &num_inteiro);

	sucessor = (num_inteiro * 3) + 1;
	antecessor = (num_inteiro * 2) - 1;

	soma = sucessor + antecessor;
	
	printf("sucessor do seu triplo: %d \n", sucessor);
	printf("Antecessor do seu dobro: %d \n", antecessor);
	printf("a soma do sucessor de seu triplo com o antecessor de  seu dobro eh %d \n", soma);

	return 0;
}
