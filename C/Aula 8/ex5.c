/*5 - Crie uma fun��o que compare se dois valores s�o iguais e retorne um booleano.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

bool eIgual(int n1, int n2);
int main (){
	setlocale(LC_ALL,"");
	int n1,n2;
	printf("Digite dois n�meros inteiros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(eIgual(n1,n2))
		printf("Os n�meros s�o iguais.");
	else
		printf("Os n�meros s�o diferentes.");
}

bool eIgual(int n1, int n2){
	if(n1 == n2)
		return true;
	else
		return false;
}
