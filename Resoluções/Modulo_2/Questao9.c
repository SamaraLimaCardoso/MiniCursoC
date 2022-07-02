/*
Quest�o 09. Fa�a um programa que apresente um menu de op��es para o c�lculo das
seguintes opera��es entre dois n�meros:

______________________________________________

                   MENU

______________________________________________
1 - Adi��o
2 - Subtra��o
3 - Multiplica��o
4 - Divis�o
5 - Sair
______________________________________________

O programa deve possibilitar ao usu�rio a escolha da opera��o desejada, a exibi��o do
resultado e a volta ao menu de op��es. O programa termina quando for escolhida a op��o
de sa�da (op��o 5).
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
		printf("\n\t1 - Adi��o");
		printf("\n\t2 - Subtra��o");
		printf("\n\t3 - Multiplica��o");
		printf("\n\t4 - Divis�o");
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
