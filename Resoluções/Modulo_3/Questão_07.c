/*
Questão 07. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM  3
int main()
{

	setlocale(LC_ALL, "");

	int matriz[TAM][TAM], i, j, transposta[TAM][TAM];

	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		{
			printf("\n Digite um numero para ficarna posição (%d)(%d) da Matriz: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	system("cls");


	printf("\n A MATRIZ NORMAL\n");

	for(i = 0; i < TAM; i++)
	{

		for(j = 0; j < TAM; j++)
		{
			printf("\t%d ", matriz[i][j]);
		}

		printf("\n");
	}



	printf("\n A MATRIZ TRANSPOSTA\n");
	for(i = 0; i < TAM; i++)
	{

		for(j = 0; j < TAM; j++)
		{
			transposta[i][j] =  matriz[j][i];
			printf("\t%d ", transposta[i][j]);
		}

		printf("\n");
	}


	return 0;
}
