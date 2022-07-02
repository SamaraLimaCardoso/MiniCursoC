//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void){

	/*
	Questão 13. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e 
	imprima o mês correspondente a este número. Isto e, janeiro se 1, fevereiro se 2, e assim por diante.
	*/
	
	int num_inteiro;
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &num_inteiro);
	
	switch(num_inteiro)
	{
	case 1:
		printf("\n Janeiro");
		break;
	case 2:
		printf("\n fevereiro");
		break;
	case 3:
		printf("\n marco");
		break;
	case 4:
		printf("\n abril");
		break;
	case 5:
		printf("\n maio");
		break;
	case 6:
		printf("\n Junho");
		break;
	case 7:
		printf("\n Julho");
		break;
	case 8:
		printf("\n agosto");
		break;
	case 9:
		printf("\n setembo");
		break;
	case 10:
		printf("\n outubro");
		break;
	case 11:
		printf("\n novembro");
		break;
	case 12:
		printf("\n Dezembro");
		break;
	default:
		printf("\n nao existe mes referente ao numero");
		break;
	}

return 0;
}