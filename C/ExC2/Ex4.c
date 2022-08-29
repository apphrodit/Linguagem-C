/*Desenvolva um programa que leia os valores de três lados de um triângulo(a,b,c) e se
os três lados forem diferentes escreva ESCALENO se os três lados forem iguais
EQUILÁTERO e se apenas dois lados forem iguais ISÓSCELES.
*/
#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL,"");

	float a, b, c; 


	printf("Digite o primeiro lado do triângulo: ");
	scanf("%f",&a);
	printf("Digite o segundo lado do triângulo: ");
	scanf("%f",&b);
	printf("Digite o terceiro lado do triângulo: ");
	scanf("%f",&c);
	if (a==b&&b==c){
	printf("O triângulo é equilátero. ");	
	}else if (a==b&&b!=c||c==b&&b!=a||a==c&&c!=b){
	printf("O triângulo é escaleno. ");
	}else if (a!=b&&b!=c&&c!=a){
	printf("O triângulo é isósceles. ");
	}	
}
