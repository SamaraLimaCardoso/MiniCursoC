/*
Quest�o 09. Fa�a um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informa��es sobre alunos de uma disciplina, sendo todas as informa��es do tipo inteiro:
	-Primeira coluna: n�mero de matricula (use um inteiro)
	-Segunda coluna: m�dia das provas
	-Terceira coluna: m�dia dos trabalhos
	-Quarta coluna: nota final
Elabore um programa que:
	�Leia as tr�s primeiras informa��es de cada aluno
	�Calcule a nota final como sendo a soma da m�dia das provas e da media dos � trabalhos
	�Imprima a matricula do aluno que obteve a maior nota final (assuma que so existe  uma maior nota)
	�Imprima a m�dia aritm�tica das notas finais

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

	setlocale(LC_ALL, "");
	int linhas = 3, colunas = 4, l, c,  posicao, matricula; // 5 alunos e 4 informa��es sobre ele
	float matriz[linhas][colunas], soma= 0, media, maior = 0;

	// preenchimento da matriz
	/*
	coluna 0 - numero matricula(8 numeros)
	coluna 1 - media das provas
	coluna 2 - media dos trabalhos
	coluna 3 - nota final = media das provas e dos trabalhos
	*/
	for(l = 0; l < linhas; l++)
	{
		for(c = 0; c < colunas; c++)
		{
			if(c == 0)
			{
				printf("Digite a matricula do aluno %d: ", l);
				scanf("%f", &matriz[l][c]);
			}
			else if(c == 1)
			{
				printf("Digite a media das provas do aluno %d: ", l);
				scanf("%f", &matriz[l][c]);
			}
			else if(c == 2)
			{
				printf("Digite a media dos trabalhos do aluno %d: ", l);
				scanf("%f", &matriz[l][c]);
			}
			else
			{
				
				matriz[l][c] = (matriz[l][1] + matriz[l][2]) / 2;
				soma = soma + matriz[l][3];
				


				if(matriz[l][c] > maior)
				{
					maior = matriz[l][c];
					posicao = l;
				}
			}
		}
	}

	for(l = 0 ; l < linhas; l++)
	{
		for(c = 0 ; c < colunas; c++)
		{
		printf("\t%f", matriz[l][c]);
		}
		
		printf("\n");
	}


	media = soma / linhas;
	
	matricula = matriz[posicao][0];
	
	
	printf("\n A maior nota eh %.2f", maior);
	printf("\n A matricula do aluno da maior nota � %d", matricula);
	printf("\n A media de todas as notas eh %.2f", media);




	return 0;
}
