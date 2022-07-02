/*
Questão 02. Faça um programa que leia dois vetores de 10 elementos.
Crie um vetor que seja a união entre os 2 vetores anteriores, ou seja,
que contém os números dos dois vetores. Não deve conter números repetidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
int main()
{

	setlocale(LC_ALL, "");

	int vetorA[TAM], vetorB[TAM],  i, tam_aux = 0, j = 0, z, n = 0;



//leitura dos dois vetores
	for(i = 0; i < TAM; i++)
	{
		printf("\n Digite um numero para preencher o vetor A: ");
		scanf("%d", &vetorA[i]);
	}


	system("cls");


	for(i = 0; i < TAM; i++)
	{
		printf("\n Digite um numero para preencher o vetor B: ");
		scanf("%d", &vetorB[i]);
	}

	system("cls");

// fim da leitura

//ver o tamanho do vetor auxiliar
	for(i = 0; i < TAM; i++)
	{
		if(vetorA[i] != vetorB[i])
		{
			tam_aux += 2;
		}
		else
		{
			tam_aux++;
		}
	}
	printf("\n%d", tam_aux);//mostra o tamanho do vetor


//VETOR Aux
	int vetorAUX[tam_aux];

	for(i = 0, z = 0; i < tam_aux; i++, z++)
	{

		if(vetorA[i] == vetorB[i])
		{
			vetorAUX[z] = vetorB[i];
		}
		else
		{
			vetorAUX[z] = vetorA[i];
			z++;
			vetorAUX[z] = vetorB[i];
		}
		printf("\n%d", vetorAUX[i]);

	}

	
//Verifica se tem repetição
	int vetorC[tam_aux];
	for( i = 0; i < tam_aux; i++)
	{
		for( j = 0; j < n; j++ )
		{
			if( vetorAUX[i] == vetorC[j] )
				break;
		}

		if( j == n )
		{
			vetorC[n] = vetorAUX[i];
			n++;
		}
	}


	printf("\n");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t\t Vetor C, sem repetições");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n");
	for( i = 0; i < n; i++ )
	{
		printf("\t%d ", vetorC[i] );
	}
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");



	return 0;
}
