/*Desenvolva um programa que leia o nome e o preço de uma mercadoria. 
O programa deverá calcular um aumento de 5% no preço da mercadoria 
e mostrar o nome da mercadoria e o seu novo preço.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");

	
	char nome[30];
	float preco, aumento, novopreco;
	printf ("Qual a mercadoria?: ");
	scanf("%s",&nome);
	printf("Digite o preço da mercadoria: ");
	scanf("%f",&preco);
	aumento = preco*5/100;
	novopreco = preco + aumento;
	printf("\nO novo preco será de: \n%.2f",novopreco);
	}
	
