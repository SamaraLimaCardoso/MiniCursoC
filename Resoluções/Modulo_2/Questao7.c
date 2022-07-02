/*
Quest�o 07. Escreva um programa que verifique quais n�meros de 1000 a 9999 possuem a propriedade seguinte: a soma dos dois d�gitos de mais baixa ordem com os dois d�gitos de mais alta ordem elevada ao quadrado � igual ao proprio numero.
Por exemplo, para o inteiro 3025, temos que:
												30+25=55
												55^2= 3025
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int i, part1, part2, result, resul_quadrado;
	
	printf("\n___________________________________________________________________________");
	printf("\n\t\tNumeros que possuem a propriedade");
	printf("\n___________________________________________________________________________");

	for(i = 1000; i <= 9999; i++)
	{
		part1 = i / 100;
		part2 = i % 100;
		result = part1 + part2;
		resul_quadrado = pow(result, 2);

		if(resul_quadrado == i)
		{
			printf("\n%d", i);
		}
	}
	
	printf("\n___________________________________________________________________________");

	return 0;
}
