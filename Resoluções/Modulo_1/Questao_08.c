//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Questão 08. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
	hipotenusa = raiz(a² + b²).
	Faça um programa que receba os valores de a e b, calcule o valor da hipotenusa através da equação.
	Imprima o resultado dessa operação.
	 */
	
	float a, b, hipotenusa;
	
	printf("\nDigite o valor de a: ");
	scanf("%f", &a);
	printf("\nDigite o valor de b: ");
	scanf("%f", &b);
	
	hipotenusa = sqrt(pow(a,2) + pow(b,2));
	
	printf("\nHipotenusa: %.2f", hipotenusa);

	return 0;
}
