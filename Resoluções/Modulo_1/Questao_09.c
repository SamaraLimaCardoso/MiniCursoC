//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void){

	/*
	Questão 09. Faça um algoritmo para ler dois números inteiros e informar se estes são iguais ou diferentes.
	*/
	int num1, num2;
	
	printf("Digite o primeiro numero inteiro para comparacao: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero inteiro para comparacao: ");
	scanf("%d", &num2);
	
	if( num1 == num2)
		printf("\nNumeros iguais");
	else
	{
		printf("\nNumeros diferentes");
	}
	


return 0;
}