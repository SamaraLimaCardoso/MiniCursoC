/*
Quest�o 08. Fa�a um programa que receba x e calcule a soma dos 10 primeiros termos da
s�rie de Taylor para a fun��o exponencial.
				e= equa��o que ta na lista :0
Determinando, dessa forma, um valor aproximado da constante de Euler.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

	setlocale(LC_ALL, "");

	int i, fat = 1, j, x;
	float E = 1;

	printf("\nDigiteum numero para x: ");
	scanf("%d", &x);


	printf("\n___________________________________________________________________________");

	for(i = 1; i <= 10; i++)
	{

		for(j = 1; j <= i; j++)
		{
			fat = fat * j;

		}

		E = (E * 1.0) + (pow(x, i) / fat);
		fat=1;
	
	}

	printf("\n\n\t O resultado de e^%d � %.2f", x, E);

	printf("\n___________________________________________________________________________");

	return 0;
}
