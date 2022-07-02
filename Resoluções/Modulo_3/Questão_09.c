/*
Questão 09. Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
	-Primeira coluna: número de matricula (use um inteiro)
	-Segunda coluna: média das provas
	-Terceira coluna: média dos trabalhos
	-Quarta coluna: nota final
Elabore um programa que:
	ºLeia as três primeiras informações de cada aluno
	ºCalcule a nota final como sendo a soma da média das provas e da media dos ´ trabalhos
	ºImprima a matricula do aluno que obteve a maior nota final (assuma que so existe  uma maior nota)
	ºImprima a média aritmética das notas finais

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

	setlocale(LC_ALL, "");
	int linhas = 3, colunas = 4, l, c,  posicao, matricula; // 5 alunos e 4 informações sobre ele
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
	printf("\n A matricula do aluno da maior nota é %d", matricula);
	printf("\n A media de todas as notas eh %.2f", media);




	return 0;
}
