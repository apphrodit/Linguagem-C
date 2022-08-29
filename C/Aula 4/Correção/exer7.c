/*Escreva um programa que leia 5 números inteiros em qualquer ordem e exiba na tela
ao final os cinco números em ordem crescente.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int n1,n2,n3,n4,n5;
	printf("Digite 5 Números: ");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
		if (n1<=n2&& n2<=n3&& n3<=n4&& n4<=n5)
	printf("A ordem crescente é:%d %d %d %d %d \n",n1,n2,n3,n4,n5);
	}
