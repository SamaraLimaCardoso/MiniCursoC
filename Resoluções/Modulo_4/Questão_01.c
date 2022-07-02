#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(int tamanho, int matriz[tamanho][tamanho]);
void transposta(int tamanho, int matriz[tamanho][tamanho]);
int somaDiagonal(int tamanho, int matriz[tamanho][tamanho]);

int main(){
	setlocale(LC_ALL, "");
	
	int tam;
	
	printf("---------------\n");
	printf("MATRIZ QUADRADA\n");
	printf("---------------\n");
	
	printf("Insira o tamanho da matriz: ");
	scanf("%d", &tam);
	while(tam <= 0){
		printf("\nValor inválido. Tente novamente. \n\n");
		printf("Insira o tamanho da matriz: ");
		scanf("%d", &tam);
	}
	system("cls");
	
	int matrizOrig[tam][tam];
	
	leitura(tam, matrizOrig);
	system("cls");
	
	transposta(tam, matrizOrig);
	system("pause");
	system("cls");
	
	printf("--------------------------\n");
	printf("SOMA DA DIAGONAL PRINCIPAL\n");
	printf("--------------------------\n\n");
	printf("A soma é %d.\n\n", somaDiagonal(tam, matrizOrig));
	
	return 0;
}

void leitura(int tamanho, int matriz[tamanho][tamanho]){
	int i, j;
	
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < tamanho; j++){
			printf("Insira o elemento [%d][%d] da matriz: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void transposta(int tamanho, int matriz[tamanho][tamanho]){
	int i, j;
	
	printf("-----------------\n");
	printf("MATRIZ TRANSPOSTA\n");
	printf("-----------------\n\n");
	
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < tamanho; j++){
			printf("%d\t", matriz[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}

int somaDiagonal(int tamanho, int matriz[tamanho][tamanho]){
	int i, j, soma;
	soma = 0;
	
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < tamanho; j++){
			if(i == j){
				soma += matriz[i][j];
			}
		}
	}
	
	return soma;
}