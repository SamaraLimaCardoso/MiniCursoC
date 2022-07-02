/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o
endereço das posições contendo valores pares.
*/

#include <stdio.h>


int main ()
{
	int vetor[5];
	int *apt = vetor;

	int i = 0;

	while(i < 5)
	{
		printf("\nDigite um numero inteiro: ");
		scanf("%d", apt + i);
		//	printf("\n%d",vetor[i]);

		i++;
	}

	i = 0;

	printf("\n--------------------------------------------------------------");
	printf("\n \t enderecos que contem numeros pares");
	printf("\n--------------------------------------------------------------");

	while(i < 5)
	{
		if(*(apt + i) % 2 == 0)
		{
			printf("\n %d", apt + i);
		}
		i++;
	}
	printf("\n--------------------------------------------------------------");

	return 0;
}
