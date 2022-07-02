/*
Questão 05. Leia um vetor com 10 números reais, ordene os elementos deste vetor,
e no final escreva os elementos do vetor ordenado.
 - BUBBLE SHORT :)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int TAM = 3;

int main()
{

	setlocale(LC_ALL, "");

	int i, vetor[TAM], contador, aux;

	for (i = 0; i < TAM; i++)
	{
		printf("\n Digite um numero para preencher a posião %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	
	system("cls");

	//ordenação
	for(contador = 0; contador < TAM; contador++)
	{
		for(i = 0; i < TAM - 1; i++)
		{
			if(vetor[i] > vetor[i + 1])
			{
				//Algoritimo de troca
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
			}
		}
	}


	printf("\n__________________________________________________________________");
	printf("\n \t\t o vetor ordenado");
	printf("\n__________________________________________________________________");

	for (i = 0; i < TAM; i++)
	{
		printf("\n %d", vetor[i]);
	}
	printf("\n__________________________________________________________________");
	return 0;
}
