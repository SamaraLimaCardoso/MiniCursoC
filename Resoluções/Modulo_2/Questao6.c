/*
Questão 06. Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor E, conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + .... +1/N!
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int  num, i,j, fat=1;
	float E = 0;

	printf("\n digite um numero para o calculo do numero harmonico H(n): ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{
		for(j=1; j<= i; j++){
			fat=fat*j;
		}
		E = E + (1.0 / fat);
	}

	printf("\no numero harmonico H(n): %.2f", E);




	return 0;
}