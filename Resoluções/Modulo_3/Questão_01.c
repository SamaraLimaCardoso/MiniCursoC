/*
Quest�o 01. Fa�a um programa que receba do usu�rio um vetor com 10 posi��es.
Em seguida dever� ser impresso o maior e o menor elemento do vetor e suas
respectivas posi��es
*/

#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");

	int vetor[10], i, maior=0, menor, posicao_maior, posicao_menor;


	/*
	printf("\n Digite um numero: ");
	scanf("%d", &vetor[0]);

	maior = vetor[0];
	menor = vetor[0];
	*/

	for(i = 0; i<10; i++)
	{

		printf("\n Digite um numero: ");
		scanf("%d", &vetor[i]);

		if(vetor[i] > maior)
		{
			maior = vetor[i];
			posicao_maior = i;

		}
		else if(vetor[i] < menor)
		{
			menor = vetor[i];
			posicao_menor = i;
		}


	}

	printf("\n________________________________________________________");
	printf("\n o maior valor encontrado foi % d e esta localizado na posi��o % d", maior, posicao_maior);
	printf("\n o menor valor encontrado foi % d e esta localizado na posi��o % d", menor, posicao_menor);
	printf("\n________________________________________________________");

	return 0;
}
