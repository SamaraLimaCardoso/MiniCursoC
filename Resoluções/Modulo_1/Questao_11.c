//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Questão 11. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo).
	O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado.
	*/

	int opcao;
	float num1, num2;

	printf("\n####################### Menu #######################");
	printf("\n 1- Soma");
	printf("\n 2- Subtracao");
	printf("\n 3- Multiplicacao");
	printf("\n 4- Divisao");
	printf("\n####################################################");

	printf("\n\n Digite a opcao desejada: ");
	scanf("%d", &opcao);




	switch(opcao)
	{
	case 1:
		printf("\n####################################################");
		printf("\n\tSoma");
		printf("\n####################################################");
		
		float soma;
		printf("\n\n Digite o primeiro valor:");
		scanf("%f", &num1);
		printf("\n Digite o segundo valor:");
		scanf("%f", &num2);
		soma = num1 + num2;
		printf("\n\nResultado: %.2f", soma);
		break;
	case 2:
		printf("\n####################################################");
		printf("\n\tSubtracao");
		printf("\n####################################################");
		float subtracao;
		printf("\n\n Digite o primeiro valor:");
		scanf("%f", &num1);
		printf("\n Digite o segundo valor:");
		scanf("%f", &num2);
		subtracao = num1 - num2;
		printf("\n\nResultado: %.2f", subtracao);
		break;
	case 3:
		printf("\n####################################################");
		printf("\n\tMultiplicacao");
		printf("\n####################################################");
		float multiplicacao;
		printf("\n\n Digite o primeiro valor:");
		scanf("%f", &num1);
		printf("\n Digite o segundo valor:");
		scanf("%f", &num2);
		multiplicacao = num1 * num2;
		printf("\n\nResultado: %.2f", multiplicacao);
		break;
	case 4:
		printf("\n####################################################");
		printf("\n\tDivisao");
		printf("\n####################################################");
		float divisao;
		printf("\n\n Digite o numerador:");
		scanf("%f", &num1);
		printf("\n Digite o divisor:");
		scanf("%f", &num2);
		divisao = num1 / num2;
		printf("\n\nResultado: %.2f", divisao);
		break;
	default:
		printf("\nopcao invalida - ERROR404");
		break;
	}

	return 0;
}
