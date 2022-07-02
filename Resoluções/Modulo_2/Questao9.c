/*
Questão 09. Faça um programa que apresente um menu de opções para o cálculo das
seguintes operações entre dois números:

______________________________________________

                   MENU

______________________________________________
1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Sair
______________________________________________

O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do
resultado e a volta ao menu de opções. O programa termina quando for escolhida a opção
de saída (opção 5).
*/

#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

	setlocale(LC_ALL, "");
	int op;
	float multiplicacao, soma, subtracao, divisao, num1, num2;

	do
	{
		printf("\n------------------------------------------------------------");
		printf("\n\t\t\tMENU");
		printf("\n------------------------------------------------------------");
		printf("\n\t1 - Adição");
		printf("\n\t2 - Subtração");
		printf("\n\t3 - Multiplicação");
		printf("\n\t4 - Divisão");
		printf("\n\t5 - Sair");
		printf("\n------------------------------------------------------------");

		
		printf("\n\n Digite a opcao desejada: ");
		scanf("%d", &op);
		
		
		system("cls");
		




		switch(op)
		{
		case 1:
			printf("\n####################################################");
			printf("\n\tSoma");
			printf("\n####################################################");

			
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
		system("pause");
		system("cls");
	}
	while(op != 5);


	return 0;
}
