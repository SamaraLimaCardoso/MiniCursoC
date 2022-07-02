/*
Quest�o 11. Fa�a um programa que leia v�rios n�meros, calcule e mostre:
- A soma dos n�meros digitados
- A quantidade de n�meros digitados
- A m�dia dos n�meros digitados
- O maior n�mero digitado
- O menor n�mero digitado
- A m�dia dos n�meros pares
Finalize a entrada de dados caso o usu�rio informe o valor 0.
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int qtd_de_numeros = 0, qtd_num_pares = 0, soma = 0, maior = 1, menor = 987654, num = 1, soma_num_pares = 0;
	float media_numeros = 0, media_num_pares = 0;


	printf("\n---------------------------------------------------");
	printf("\nPara sair digite 0");
	printf("\n---------------------------------------------------");

	while(num != 0)
	{
		printf("\n\nDigite um numero: ");
		scanf("%d", &num);

		soma += num;
		qtd_de_numeros++;

		if(num % 2 == 0)
		{
			soma_num_pares += num;
			qtd_num_pares++;
			media_num_pares = soma_num_pares / qtd_num_pares;
		}

		if(num > maior)
		{
			maior = num;
		}
		else if(num < menor)
		{
			menor = num;
		}

	}

	media_numeros = soma / qtd_de_numeros;


	printf("\n--------------------------------------------------------");
	printf("\n A soma  �: %d", soma);
	printf("\n A media  �: %.2f", media_numeros);
	printf("\n A qtd de numeros  �: %d", qtd_de_numeros);
	printf("\n A soma dos numeros pares  �: %d", soma_num_pares);
	printf("\n A media dos numeros pares  �: %.2f", media_num_pares);
	printf("\n A qtd de numeros pares  �: %d", qtd_num_pares);
	printf("\n O maior numero digitado  �: %d", maior);
	printf("\n O menor numero digitado  �: %d", menor);
	printf("\n--------------------------------------------------------");


	return 0;
}
