#include <stdio.h>
#include<locale.h>

int superFatorial(int);
int fatorial(int);

int main()
{
	setlocale(LC_ALL, "");
	int num;

	printf("------------------> SUPER-FATORIAL <-------------------\n");
	printf("\n--- Insira um número para encontrar seu super-"
		   "fatorial: ");
	scanf("%d", &num);

	printf("\n--- sf(%d) = %d \n", num, superFatorial(num));


	return 0;
}

int superFatorial(int N)
{
	if(N == 1)
	{
		return 1;
	}

	return (fatorial(N) * superFatorial(N - 1));
}

int fatorial(int N)
{
	if(N == 1)
	{
		return 1;
	}

	return (N *fatorial(N - 1));
}
