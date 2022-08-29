/*Desenvolva um programa que leia a velocidade de um carro (km/h)
e a distância a ser percorrida (km) por ele. 
Calcule e apresente na tela, quanto tempo (horas) 
será necessário para o carro percorrer a distância informada.
*/
// Nenhuma variavél começa com número na FRENTE!//
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");
	float Km, KmH, T;
	//Entradas
	printf ("Digite a velocidade média em quilômetros por hora: ");
	scanf ("%f",&KmH);
	printf ("Digite a distância percorrida em Km: ");
	scanf("%f",&Km);
	//Processamento 
	T = Km / KmH;
	//Saída
	printf ("O tempo necessário para percorrer a distância é de: %.2f Horas",T);
	}
