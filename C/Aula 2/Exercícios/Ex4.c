/*Desenvolva um programa que leia o nome de um time de futebol, 
o n�mero de vit�rias e o n�mero de empates. 
O programa dever� calcular e apresentar na tela, 
o nome do time e o total de pontos. 
Lembrando que a vit�ria vale 3 pontos
e o empate vale 1 ponto.
*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"");
	
	char time[11]; //string
	printf("Digite o nome do time: ");
	scanf("%s", time);
	
	int a, b, c, x, y;
	printf("N�mero De Vit�rias: ");
	scanf("%d",&a);
	a = 3;
	printf("N�mero De Empates: ");
	scanf("%d",&b);
	b = 1;
	printf("Total de pontos: ");
	c = (3*a)+(1*b);
	printf("Este time possui %d pontos", c);
	}
