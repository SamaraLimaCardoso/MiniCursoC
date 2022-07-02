/*
Quest�o 08. Fa�a um programa para gerar automaticamente n�meros entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela dever� conter 5 linhas de 5 n�meros, gere estes dados de modo a n�o ter n�meros
repetidos dentro das cartelas.  O programa deve exibir na  tela a cartela gerada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM  5
int main()
{

	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	int matriz[TAM][TAM], i, j, k = 0, vetor[TAM * TAM];

	for(i = 0; i < 25; i++)
	{
		
		vetor[i] = rand() % 99;
		//verificando se o n�mero j� existe, afim de evitar elementos repetidos

		for(j = 0; j < i; j++)
		{
			if(vetor[j] == vetor[i]) //n�o ter numeros repetidos no vetor
			{
				vetor[i] = rand() % 99;
				j = 0;
				
			}
			
		}
		
	}

	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		{
			
			matriz[i][j] = vetor[k]; //iguala os numeros do vetor na matriz
			k++;

			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}