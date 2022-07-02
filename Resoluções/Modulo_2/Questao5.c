/*
Quest�o 05. Em Matem�tica, o n�mero harm�nico designado por H(n) define- se como sendo a soma da s�rie harm�nica:
H(n) = 1 + 1/2 + 1/3 + 1/4 + .... +1/n
Fa�a um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int  num, i;
	float H = 0;

	printf("\n digite um numero para o calculo do numero harmonico H(n): ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{
		H = H + (1.0 / i);
	}

	printf("\no numero harmonico H(n): %.2f", H);




	return 0;
}
