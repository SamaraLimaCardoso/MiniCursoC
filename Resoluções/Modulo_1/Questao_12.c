//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Questão 12. Leia a, b, c e calcule as raízes da equação de 2º grau.
		ºA variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
	   	ºSe delta < 0, nao existe real. Imprima a mensagem “Não existe raiz”.
		ºSe delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
		ºSe delta = 0, imprima as duas raízes reais

	*/
	float a, b, c, delta;
	printf("Informe a: ");
	scanf("%f", &a);
	printf("Informe b: ");
	scanf("%f", &b);
	printf("Informe c: ");
	scanf("%f", &c);
	delta = pow(b, 2) - (4 * a * b);

	if(delta>0){
		printf("Nao existe raiz");
	}
	else if(delta == 0)
	{
		float raiz1;
		raiz1 = (-b + sqrt(delta)) / (2 * a);
		printf("\nPossui apenas umas raiz");
		printf("\n raiz: % .2f", raiz1);
	}
	else
	{
		float raiz1, raiz2;
		raiz1 = (-b + sqrt(delta)) / (2 * a);
		raiz2 = (-b - sqrt(delta)) / (2 * a);
		printf("\nPossui duas raizes");
		printf("\n raiz: %.2f", raiz1);
		printf("\n raiz: %.2f", raiz2);
	}

	return 0;
}
