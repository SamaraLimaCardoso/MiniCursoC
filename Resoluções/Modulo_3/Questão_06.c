/*
Questão 06. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma: 
A[i][j] = 2i + 7j - 2 se i < j; 
A[i][j] = 3i2 - 1 se i = j; 
A[i][j] = 4i3 - 5j 2 + 1 se i > j.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM  10

int main()
{

	setlocale(LC_ALL, "");

	int matriz[TAM][TAM],i,j;
	
	printf("\n\t################################################################################");
	printf("\n\t\t\t\t MATRIZ");
	printf("\n\t################################################################################\n\n");

	for (i = 0; i < TAM; i++)
	{
		
		for(j = 0; j < TAM; j++){
			
			if(i<j){
				matriz[i][j]=(2*i)+(7*j)-2;
			}else if(i==j){
				matriz[i][j]=(3*i*2)-1;
			}else{
				matriz[i][j]=(4*i*3)+(5*j*2)+1;
			}
			
			printf("\t%d", matriz[i][j]);
			
		}
		printf("\n");
	}
	

	return 0;
}
