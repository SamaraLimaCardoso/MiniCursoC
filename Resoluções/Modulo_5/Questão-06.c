/*Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e  determina o maior elemento do array e o número de vezes
que este elemento ocorreu no array.
Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retornar para o programa que a chamou o
valor 15 e o número 3  (indicando que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.
*/

#include <stdio.h>

void mair_cont_element(int vet[], int tam, int *maior, int *n_vezes);

int main ()
{
	int maior, tam, n_vezes = 0, i;

	printf("\n Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	
	int vetor[tam];
	int *ptr = vetor;
	
	
	i = 0;
	while(i < tam)
	{
		printf("\n Digite um numero ineiro para preencher o vetor: ");
		scanf("%d", ptr + i);
		i++;
	}

	mair_cont_element(vetor, tam, &maior, &n_vezes);

	printf("\n o maior numero, %d, foi repetido %d vezes", maior, n_vezes);

	return 0;
}
void mair_cont_element(int vet[], int tam, int *maior, int *n_vezes)
{
	int i = 1, *ptr = vet, cnt=0;

	*maior = *(ptr);
	//acha p numero maior
	while(i < tam)
	{
		if(*(ptr + i) > *maior)
		{
			*maior = *(ptr + i);
		}

		i++;
	}
	//procura quantas vezes o numero maior repetiu
	i = 0;
	while(i < tam)
	{
		if(*maior == *(ptr + i))
		{
			//printf("\n+1");
			cnt++;
		}

		i++;
	}
	*n_vezes = cnt;
}
