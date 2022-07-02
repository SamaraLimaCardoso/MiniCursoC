/*
Questão 04. Faça um programa que receba do usuário dois vetores,  A e B, com 10 números inteiros cada.
Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define  TAM 10

int main()
{

	setlocale(LC_ALL, "");

	int i, vetorA[TAM], vetorB[TAM], vetorC[TAM];

	for(i = 0; i < TAM; i++)
	{
		printf("\n Digite um valor para preencher o vetor A: ");
		scanf("%d", &vetorA[i]);
	}
	system("cls");
	for(i = 0; i < TAM; i++)
	{
		printf("\n Digite um valor para preencher o vetor B: ");
		scanf("%d", &vetorB[i]);
	}
	system("cls");

	printf("\n__________________________________________________________________");
	printf("\n \t\t o vetor c eh:");
	printf("\n__________________________________________________________________");
	
	for(i = 0; i < TAM; i++)
	{
		vetorC[i] = vetorA[i] - vetorB[i];
		printf("\n%d ",  vetorC[i]);

	}
	printf("\n__________________________________________________________________");




	return 0;
}
