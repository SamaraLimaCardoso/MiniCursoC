/*
Questão 11. Faça um programa que leia vários números, calcule e mostre:
- A soma dos números digitados
- A quantidade de números digitados
- A média dos números digitados
- O maior número digitado
- O menor número digitado
- A média dos números pares
Finalize a entrada de dados caso o usuário informe o valor 0.
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
	printf("\n A soma  é: %d", soma);
	printf("\n A media  é: %.2f", media_numeros);
	printf("\n A qtd de numeros  é: %d", qtd_de_numeros);
	printf("\n A soma dos numeros pares  é: %d", soma_num_pares);
	printf("\n A media dos numeros pares  é: %.2f", media_num_pares);
	printf("\n A qtd de numeros pares  é: %d", qtd_num_pares);
	printf("\n O maior numero digitado  é: %d", maior);
	printf("\n O menor numero digitado  é: %d", menor);
	printf("\n--------------------------------------------------------");


	return 0;
}
