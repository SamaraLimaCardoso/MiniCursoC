/*
Questão 03. Escreva um programa que leia um número inteiro e calcule
 a soma de todos os divisores desse número, com exceção dele próprio.
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int i, num, soma = 0;

	printf("Digite m numero inteiro: ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{

		if(num % i == 0)
		{
			soma = soma + i;
			printf("\n%d", soma);
		}

	}

	printf("\n##########################################################");
	printf("\n\t\tSOMA É: %d", soma);
	printf("\n##########################################################");

	return 0;
}
