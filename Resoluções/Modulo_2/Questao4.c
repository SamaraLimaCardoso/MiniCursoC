/*
Questão 04. Faça um programa que some todos os números naturais
abaixo de 1000 que são múltiplos  de 3 ou 5.
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int i, soma = 0, div_pelos_dois = 0, div_por_cinco = 0 , div_por_tres = 0;

	for(i = 1; i < 1000; i++)
	{
		if(i % 5 == 0 && i % 3 == 0)
		{
			printf("\n%d", i);
			soma = soma + i;
			div_pelos_dois++;

		}
		else if(i % 5 == 0 )
		{
			printf("\n%d", i);
			soma = soma + i;
			div_por_cinco++;

		}
		else if(i % 3 == 0 )
		{
			printf("\n%d", i);
			soma = soma + i;
			div_por_tres++;

		}
	}
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\nSoma= %d", soma);
	printf("\nQtd de numeros multiplos de 3 e 5= %d", div_pelos_dois);
	printf("\nQtd de numeros multiplos de 3 = %d", div_por_tres);
	printf("\nQtd de numeros multiplos de 5= %d", div_por_cinco);
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");



	return 0;
}
