//Inclus�o de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(void)
{

	/*
	Quest�o 10. Leia a idade e o tempo de servi�o de um trabalhador e escreva se ele pode ou n�o se aposentar. 
	As condi��es para aposentadoria s�o:
		�Ter pelo menos 65 anos;
		�Ou ter trabalhado pelo menos 30 anos;
		�Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
	*/
	
	int idade, tempo_servico;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu tempo de servico em anos: ");
	scanf("%d", &tempo_servico);
	
	if(idade >= 65 || tempo_servico >= 25){
		printf("VOCE PODE APOSENTAR");
	}else if( idade >= 60 && idade <=65)
	{
		if(tempo_servico >=25){
			printf("VOCE PODE APOSENTAR");
		}else
		{
			printf("VOCE NAO PODE SE APOSENTAR");
		}
	}else
	{
		printf("VOCE NAO PODE SE APOSENTAR");
	}

	return 0;
}
