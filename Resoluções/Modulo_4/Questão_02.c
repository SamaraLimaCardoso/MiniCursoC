#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

void leitura(int idade[TAM], char sexo[TAM], char olhos[TAM], char cabelos[TAM]);
float mediaIdade(int idade[TAM], char olhos[TAM], char cabelos[TAM]);
int maiorIdade(int idade[TAM]);
int selecao(int idade[TAM], char sexo[TAM], char olhos[TAM], char cabelos[TAM]);

int main(){
	setlocale(LC_ALL, "");
	
	float media;
	int idade[TAM], quantidade, maior;
	char sexo[TAM], olhos[TAM], cabelos[TAM];
	
	media = 0;
	quantidade = 0;
	
	leitura(idade, sexo, olhos, cabelos);
	
	media = mediaIdade(idade, olhos, cabelos);
	printf("-----------------------------------------------\n");
	printf("HABITANTES COM OLHOS CASTANHOS E CABELOS PRETOS\n");
	printf("-----------------------------------------------\n\n");
	if(media == 0){
		printf("Nenhum participante da pesquisa atende aos requisitos.\n\n");
	} else{
		printf("A média das idades dessas pessoas é %.1f anos.\n\n", media);
	}
	system("pause");
	system("cls");
	
	maior = maiorIdade(idade);
	printf("-------------------------------\n");
	printf("MAIOR IDADE ENTRE OS HABITANTES\n");
	printf("-------------------------------\n\n");
	printf("A maior idade é %d anos.\n\n", maior);
	system("pause");
	system("cls");
	
	quantidade = selecao(idade, sexo, olhos, cabelos);
	printf("--------------------------------------------------------------------------------\n");
	printf("HABITANTES DO SEXO FEMININO ENTRE 18 E 35 ANOS, COM OLHOS AZUIS E CABELOS LOUROS\n");
	printf("--------------------------------------------------------------------------------\n\n");
	if(quantidade == 0){
		printf("Nenhum participante da pesquisa atende aos requisitos.\n\n");
	} else{
		printf("A quantidade de habitantes que atendem aos requisitos é %d.\n\n", quantidade);
	}
	
	return 0;
}

void leitura(int idade[TAM], char sexo[TAM], char olhos[TAM], char cabelos[TAM]){
	int i;
	
	printf("---------------\n");
	printf("PESQUISA \"IBGE\"\n");
	printf("---------------\n\n");
	
	for(i = 0; i < 5; i++){
		printf("------------------------\n");
		printf("Dados do %dº participante\n", i+1);
		printf("------------------------\n\n");
		
		printf("SEXO (F/M): ");
		scanf(" %c", &sexo[i]);
		while((sexo[i] != 'F') && (sexo[i] != 'M') && (sexo[i] != 'f') && (sexo[i] != 'm')){
			printf("\nValor inválido. Tente novamente.\n\n");
			printf("SEXO (F/M): ");
			scanf(" %c", &sexo[i]);
		}
		
		printf("COR DOS OLHOS (A-zuis/ C-astanhos): ");
		scanf(" %c", &olhos[i]);
		while((olhos[i] != 'A') && (olhos[i] != 'C') && (olhos[i] != 'a') && (olhos[i] != 'c')){
			printf("\nValor inválido. Tente novamente.\n\n");
			printf("COR DOS OLHOS (A-zuis/ C-astanhos): ");
			scanf(" %c", &olhos[i]);
		}
		
		printf("COR DOS CABELOS (L-ouros/ P-retos/ C-astanhos): ");
		scanf(" %c", &cabelos[i]);
		while((cabelos[i] != 'L') && (cabelos[i] != 'P') && (cabelos[i] != 'C') && (cabelos[i] != 'l') && (cabelos[i] != 'p') && (cabelos[i] != 'c')){
			printf("\nValor inválido. Tente novamente.\n\n");
			printf("COR DOS CABELOS (L-ouros/ P-retos/ C-astanhos): ");
			scanf(" %c", &cabelos[i]);
		}
		
		printf("IDADE: ");
		scanf("%d", &idade[i]);
		while(idade[i] <= 0){
			printf("\nValor inválido. Tente novamente.\n\n");
			printf("IDADE: ");
			scanf("%d", &idade[i]);
		}
		
		system("cls");
	}
}

float mediaIdade(int idade[TAM], char olhos[TAM], char cabelos[TAM]){
	int i;
	float media, soma;
	soma = 0;
	
	for(i = 0; i < TAM; i++){
		if(((olhos[i] == 'C') || (olhos[i] == 'c')) && ((cabelos[i] == 'P') || (cabelos[i] == 'p'))){
			soma += idade[i];
		}
	}
	
	media = soma/TAM;
	
	return media;
}

int maiorIdade(int idade[TAM]){
	int maior, i;
	maior = idade[0];
	
	for(i = 1; i < TAM; i++){
		if(idade[i] > maior){
			maior = idade[i];
		}
	}
	
	return maior;
}

int selecao(int idade[TAM], char sexo[TAM], char olhos[TAM], char cabelos[TAM]){
	int qtd, i;
	qtd = 0;
	
	for(i = 0; i < TAM; i++){
		if((idade[i] >= 18) && (idade[i] <= 35) && ((sexo[i] == 'F') || (sexo[i] == 'f')) && ((olhos[i] == 'A') || (olhos[i] == 'a')) && ((cabelos[i] == 'L') || (cabelos[i] == 'l'))){
			qtd++;
		}
	}
	
	return qtd;
}