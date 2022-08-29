/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em
metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de
1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros,
que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00. Informe ao
usuário as quantidades de tinta a serem compradas e os respectivos preços em
2 situações.
*/

//a. Comprar apenas latas de 18 litros;
//b. Comprar apenas galões de 3,6 litros;

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float area, litro,quantgal,quantlat,valgal,vallat;
	
	printf("Informe o tamanho, em metros quadrados, da área a ser pintada: ");
	scanf("%f", &area);
	
	litro = area / 6;
	quantgal = litro / 18;
	valgal = quantgal * 80;
	quantlat = litro / 3.6;
	vallat = quantlat * 25;
	
	printf("\n Quantidade de litros necessários: %.2f.", litro);
	printf("\n Quantidade de latas de 18 litros: %.2f e valor gasto: %.2f.",quantgal,valgal);
    printf("\n Quantidade de latas de 3,6 litros: %.2f e valor gasto: %.2f.",quantlat,vallat);	
}
