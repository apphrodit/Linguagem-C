/*5 - Crie uma função que compare se dois valores são iguais e retorne um booleano.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

bool eIgual(int n1, int n2);
int main (){
	setlocale(LC_ALL,"");
	int n1,n2;
	printf("Digite dois números inteiros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(eIgual(n1,n2))
		printf("Os números são iguais.");
	else
		printf("Os números são diferentes.");
}

bool eIgual(int n1, int n2){
	if(n1 == n2)
		return true;
	else
		return false;
}
