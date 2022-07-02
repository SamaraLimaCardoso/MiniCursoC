#include<stdio.h>
#include<locale.h>

int fibonacci(int);

int main()
{
	setlocale(LC_ALL, "");
	int n, i;

	printf("-------------------> SÉRIE DE FIBONACCI <--------------------\n");
	printf("\n--- Insira um número para encontrar o n-ésimo valor da série: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++ )
	{
		printf("\n--> %d", fibonacci(i));
	}

	return 0;
}

int fibonacci(int fib)
{
	if (fib == 0)
	{
		return 0;
	}
	else if (fib == 1)
	{
		return 1;
	}
	else
		return (fibonacci(fib - 1) + fibonacci(fib - 2));
}
