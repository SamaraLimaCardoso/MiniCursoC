/*
Quest�o 02. Fa�a um programa que leia um n�mero inteiro positivo n e calcule a soma dos n primeiros n�meros naturais.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int i, num, soma=0;
	
	printf("Digite m numero inteiro: ");
	scanf("%d", &num);
	
	
	for(i=0;i<=num;i++){
		soma+=i;
		printf("\n%d",soma);
	}
	
	printf("\n##########################################################");
	printf("\n\t\tSOMA �: %d", soma);
	printf("\n##########################################################");
	
	return 0;
}