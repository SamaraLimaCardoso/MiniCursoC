//Inclus�o de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Quest�o 08. Sejam a e b os catetos de um tri�ngulo, onde a hipotenusa � obtida pela equa��o:
	hipotenusa = raiz(a� + b�).
	Fa�a um programa que receba os valores de a e b, calcule o valor da hipotenusa atrav�s da equa��o.
	Imprima o resultado dessa opera��o.
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
