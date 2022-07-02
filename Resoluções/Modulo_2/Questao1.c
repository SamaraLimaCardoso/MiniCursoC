/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o
maior valor lido.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

	setlocale(LC_ALL, "");

	int i, maior = 1, menor = 10, numero;

	printf("\n-----------------------------------------------");
	printf("\nDigite 10 numeros inteiros e programa informara \nqual foi o maio e o menor numero inserido");
	printf("\n-----------------------------------------------");


	for(i = 1; i <= 10; i++)
	{

		printf("\n-----------------------------------------------");
		printf("\nnumero de posição %d", i);
		printf("\n-----------------------------------------------");

		printf("\nDigite um numero inteiro: ");
		scanf("%d", &numero);

		if(numero < menor)
		{
			menor = numero;
		}
		else if(numero > maior)
		{
			maior = numero;
		}
		system("cls");

	}
	printf("\n-----------------------------------------------");
	printf("\nO maior numero inserido foi: %d", maior);
	printf("\nO menor numero inserido foi: %d", menor);
	printf("\n-----------------------------------------------");



	return 0;
}
