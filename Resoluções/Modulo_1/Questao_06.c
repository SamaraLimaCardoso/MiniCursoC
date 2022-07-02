//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{
	/*
	Questão 06. Escreva um programa que receba quatro números e calcule a média aritmética,
	a soma e o produto de todos os números e exiba o resultado na tela.
	*/

	float num1 , num2 , num3 , num4, soma1, produto, media;

	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &num3);
	printf("Digite o quarto numero: ");
	scanf("%f", &num4);

	soma1 = num1 + num2 + num3 + num4;
	produto =  num1 * num2 * num3 * num4;
	media = soma1 / 4;

	printf("A soma eh %.2f \n O produto eh %.2f \n A media eh %.2f", soma1, produto, media);


	return 0;
}
