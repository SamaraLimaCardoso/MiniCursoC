//Inclusão de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Questão 07. Questão 07. Tres amigos jogaram na loteria. Caso eles ganhem,o prêmio
	deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta.
	Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima
	quanto cada um  ganharia do prêmio com base no valor investido.
	*/

	float apost_amigo1, apost_amigo2, apost_amigo3, total_aposta, premio, premio_amg1, premio_amg2, premio_amg3, perc1, perc2, perc3;

	printf("Informe a Contribuicao Amigo 1: ");
	scanf("%f", &apost_amigo1);
	printf("Informe a Contribuicao Amigo 2: ");
	scanf("%f", &apost_amigo2);
	printf("Informe a Contribuicao Amigo 3: ");
	scanf("%f", &apost_amigo3);
	printf("Informe o valor do premio: ");
	scanf("%f", &premio);

	total_aposta = apost_amigo1 + apost_amigo2 + apost_amigo3; // Calcula o valor total da aposta
	
// Calcula a porcentagem contribuida de cada amigo
	perc1 = (apost_amigo1 * 100) / total_aposta;
	perc2 = (apost_amigo2 * 100) / total_aposta;
	perc3 = (apost_amigo3 * 100) / total_aposta;
	
// Calcula o premio de cada amigo
	premio_amg1 = (premio * perc1) / 100;
	premio_amg2 = (premio * perc2) / 100;
	premio_amg3 = (premio * perc3) / 100;

	printf("############ Premios ############ \n");
	printf("Amigo 1: %.2f \n", premio_amg1);
	printf("Amigo 2: %.2f \n", premio_amg2);
	printf("Amigo 2: %.2f \n", premio_amg3);
	printf("################################ \n");

	return 0;
}
