/*Desenvolva um programa que leia o nome de uma cidade, 
o n�mero total de eleitores e o n�mero total de votos apurados na 
�ltima elei��o. O programa dever� calcular e exibir a porcentagem de 
participa��o dos eleitores desta cidade na �ltima elei��o.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");
	char nome[30];
	int te, ta;
	printf("Digite o nome da cidade: ");
	scanf("%s",&nome);
	printf("Digite o total de eleitores: ");
	scanf("%d",&te);
	printf("Digite o total de votos apurados: ");
	scanf("%d",&ta);
	ta = ta*100;
	ta = ta/te;
	printf("A participa��o dos eleitores foi de: %d%%",ta);
	}	
