/*Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900km/h,
fa�a um programa que leia uma dist�ncia (km),
calcule e apresente na tela, quanto tempo (horas)
ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");
	float Km, KmH, Th;
	printf ("Digite a velocidade m�dia em quil�metros por hora: ");
	scanf ("%f",&KmH);
	printf ("\nDigite a dist�ncia percorrida em Km: ");
	scanf("%f",&Km);
	Th = Km / 900;
	printf ("O tempo necess�rio para sobrevoar a dist�ncia � de: %.2f Horas",Th);
	}
