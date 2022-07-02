/*
Questão 10. Faça um programa que some os termos de valor par da sequência de
Fibonacci, cujos valores não ultrapassem quatro milhões.

Sequência de Fibonacci: Fn = Fn - 1 + Fn - 2
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int prox_num=1, fib1 = 1, fib2 = 1, soma=0, i;
	

	for(i = 1; prox_num <= 4000000 ; i++) //loop infino
	{
		prox_num = fib1 + fib2;  //{1,1,2,3,5,8,13,........}
		fib1 = fib2; //1
		fib2 = prox_num; //2

		printf("\n fib= %d",prox_num);
		
		if(prox_num % 2 == 0)
		{
			soma=soma+prox_num;
			printf("\n soma= %d",soma);
		}

	}
	
	printf("\n--------------------------------------------------------");
	printf("\n A soma  é: %d", soma);
	printf("\n--------------------------------------------------------");


	return 0;
}
