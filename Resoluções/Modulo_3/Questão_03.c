/*
Questão 03. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "");
	
	int i;
	float notas[15], soma=0, media;
	
	for(i=0; i<15; i++){
		printf("\n Digite a nota do aluno %d: ",i);
		scanf("%f",&notas[i]);
		soma+=notas[i];
		system("cls");
	}
	
	media = soma/15;
	
	printf("\n a media dos alunos foi %.2f",media);

	

	return 0;
}
