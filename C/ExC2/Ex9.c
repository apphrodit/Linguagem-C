/*Desenvolva um algoritmo que faça o cálculo do reajuste salarial do funcionário,
baseado nos seguintes parâmetros: 15% De Aumento: R$1500,00<=salário atual <R$1750,00
								  12% De Aumento: R$1750,00<=salário atual <R$2000,00
								  9% De Aumento: R$2000,00<=salário atual <R$3000,00
								  6% De Aumento: salário atual >= R$3000,00
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL);
