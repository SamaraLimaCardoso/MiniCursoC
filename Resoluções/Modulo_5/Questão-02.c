/*Escreva um programa que leia a vari�vel R e nele Implemente uma fun��o que calcule a  �rea da superf�cie e o volume de uma esfera de raio R.
Essa fun��o deve obedecer ao prot�tipo:
					void calc_esfera(float R, float *area, float *volume)
Os resultados da �rea e do volume devem ser apresentados ao usu�rio pela fun��o principal.*/

#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main()
{
	float r, area, volume;

	printf("\nDigite o raio: ");
	scanf("%f", &r);

	calc_esfera(r, &area, &volume);

	printf("\n\nArea: %.2f ", volume);
	printf("\nVolume:%.2f\n ", area);

	return 0;
}
void calc_esfera(float R, float *area, float *volume)
{
	*volume = (4 / 3) * M_PI * pow(R, 2);
	*area = 4 * M_PI * pow(R, 3);
}
