/*Escreva um programa que leia 5 n�meros inteiros em qualquer ordem e exiba na tela
ao final os cinco n�meros em ordem crescente.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int n1,n2,n3,n4,n5;
	printf("Digite 5 N�meros: ");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
		if (n1<=n2&& n2<=n3&& n3<=n4&& n4<=n5)
	printf("A ordem crescente �:%d %d %d %d %d \n",n1,n2,n3,n4,n5);
	}
