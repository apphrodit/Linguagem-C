/*Escreva um programa que leia dois n�meros inteiros e determine qual � o maior
e o menor.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int n1,n2,numero;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	if (n1>n2){
		numero = n1;
	}else if(n1<n2) {
		numero=n2;
		printf("O maior n�mero �: %d",numero);
	}
}
