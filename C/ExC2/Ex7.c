/*Escreva um programa que leia 5 n�meros inteiros em qualquer ordem e exiba na tela
ao final os cinco n�meros em ordem crescente.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int n1,n2,n3,n4,n5;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&n3);
	printf("Digite o quarto n�mero: ");
	scanf("%d",&n4);
	printf("Digite o quinto n�mero: ");
	scanf("%d",&n5);
	
	printf("A ordem dos n�meros � %d %d %d %d %d", n1,n2,n3,n4,n5);
}
