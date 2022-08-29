/*Desenvolva um programa que leia o nome de uma cidade, 
o número total de eleitores e o número total de votos apurados na 
última eleição. O programa deverá calcular e exibir a porcentagem de 
participação dos eleitores desta cidade na última eleição.
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
	printf("A participação dos eleitores foi de: %d%%",ta);
	}	
