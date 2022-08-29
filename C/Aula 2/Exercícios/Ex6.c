/*Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900km/h,
faça um programa que leia uma distância (km),
calcule e apresente na tela, quanto tempo (horas)
será necessário para um 747-300 sobrevoar a distância informada.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");
	float Km, KmH, Th;
	printf ("Digite a velocidade média em quilômetros por hora: ");
	scanf ("%f",&KmH);
	printf ("\nDigite a distância percorrida em Km: ");
	scanf("%f",&Km);
	Th = Km / 900;
	printf ("O tempo necessário para sobrevoar a distância é de: %.2f Horas",Th);
	}
