/*Desenvolva um programa que leia a velocidade de um carro (km/h)
e a dist�ncia a ser percorrida (km) por ele. 
Calcule e apresente na tela, quanto tempo (horas) 
ser� necess�rio para o carro percorrer a dist�ncia informada.
*/
// Nenhuma variav�l come�a com n�mero na FRENTE!//
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");
	float Km, KmH, T;
	//Entradas
	printf ("Digite a velocidade m�dia em quil�metros por hora: ");
	scanf ("%f",&KmH);
	printf ("Digite a dist�ncia percorrida em Km: ");
	scanf("%f",&Km);
	//Processamento 
	T = Km / KmH;
	//Sa�da
	printf ("O tempo necess�rio para percorrer a dist�ncia � de: %.2f Horas",T);
	}
