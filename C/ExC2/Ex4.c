/*Desenvolva um programa que leia os valores de tr�s lados de um tri�ngulo(a,b,c) e se
os tr�s lados forem diferentes escreva ESCALENO se os tr�s lados forem iguais
EQUIL�TERO e se apenas dois lados forem iguais IS�SCELES.
*/
#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL,"");

	float a, b, c; 


	printf("Digite o primeiro lado do tri�ngulo: ");
	scanf("%f",&a);
	printf("Digite o segundo lado do tri�ngulo: ");
	scanf("%f",&b);
	printf("Digite o terceiro lado do tri�ngulo: ");
	scanf("%f",&c);
	if (a==b&&b==c){
	printf("O tri�ngulo � equil�tero. ");	
	}else if (a==b&&b!=c||c==b&&b!=a||a==c&&c!=b){
	printf("O tri�ngulo � escaleno. ");
	}else if (a!=b&&b!=c&&c!=a){
	printf("O tri�ngulo � is�sceles. ");
	}	
}
