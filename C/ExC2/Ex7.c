/*Escreva um programa que leia 5 números inteiros em qualquer ordem e exiba na tela
ao final os cinco números em ordem crescente.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int n1,n2,n3,n4,n5;
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	printf("Digite o terceiro número: ");
	scanf("%d",&n3);
	printf("Digite o quarto número: ");
	scanf("%d",&n4);
	printf("Digite o quinto número: ");
	scanf("%d",&n5);
	
	printf("A ordem dos números é %d %d %d %d %d", n1,n2,n3,n4,n5);
}
