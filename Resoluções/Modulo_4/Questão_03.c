#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int pell(int num);

int main(){
	setlocale(LC_ALL, "");
	
	int n;
	n = 7;
	
	printf("-------------------------\n");
	printf("CALCÚLO DO NÚMERO DE PELL\n");
	printf("-------------------------\n\n");
	
	printf("Sendo n = 7\n");
	printf("p(n) = %d\n\n", pell(n));
	
	return 0;
}

int pell(int num){
	int numPell;
	
	if(num == 0){
		numPell = 0;
	} else if(num == 1){
		numPell = 1;
	} else{
		numPell = (2 * pell(num - 1)) + pell(num - 2);
	}
	
	return numPell;
}