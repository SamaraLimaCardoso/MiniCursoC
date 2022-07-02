/*
Fa�a um programa que calcule e exiba todos os pal�ndromos entre 10 e 999.
Pal�ndromos s�o n�meros que podem ser lidos da direita para esquerda e da esquerda para
a direita, mas que n�o altera seu valor num�rico, por exemplo 99.
*/

#include<stdio.h>
#include<locale.h>
 
int main()
{
	setlocale(LC_ALL, "");
	int num = 10, aux, reverso;

	printf("Tabela de n�meros pal�ndromos abaixo de 1000:\n\n");
	
	for(num = 10; num <= 999; num++)
	{
		aux = num;
		reverso = 0;

		while (aux != 0)
		{
			reverso = (reverso * 10) + (aux % 10);  
			aux = aux / 10;                     
		}

		if (reverso == num)
			printf("\t-> %d \n", num);
	}

	return 0;
}