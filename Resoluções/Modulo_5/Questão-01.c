/*Escreva um programa que leia a vari�vel A e tenha uma fun��o que calcule o dobro, o triplo e o
qu�druplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para
calcular o dobro, C o triplo e D o qu�druplo. Exiba os resultados na main para o usu�rio.*/

#include <stdio.h>
#include<math.h>

void calculo(int *a, int *b, int *c, int *d);

int main()
{
	int a, b, c, d;
	
	printf("\nDigite um valor inteiro para A: ");
	scanf("%d", &a);
	
	calculo(&a,&b,&c,&d);
	
	printf("\nO dobro de %d: %d",a,b);
	printf("\nO triplo de %d: %d",a,c);
	printf("\nO quadruplo de %d: %d",a,d);

	return 0;
}
void calculo(int *a, int *b, int *c, int *d){
	
	/*
	b- dobro
	c - triplo
	d- qu�druplo
	*/
	*b = pow(*a,2);
	*c = pow(*a,3);
	*d = pow(*a,4);
	
	
}