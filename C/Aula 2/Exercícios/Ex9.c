/*Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. 
O programa dever� calcular um aumento de 5% no pre�o da mercadoria 
e mostrar o nome da mercadoria e o seu novo pre�o.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");

	
	char nome[30];
	float preco, aumento, novopreco;
	printf ("Qual a mercadoria?: ");
	scanf("%s",&nome);
	printf("Digite o pre�o da mercadoria: ");
	scanf("%f",&preco);
	aumento = preco*5/100;
	novopreco = preco + aumento;
	printf("\nO novo preco ser� de: \n%.2f",novopreco);
	}
	
