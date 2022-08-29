/*Desenvolva um programa que leia o raio (cm) e a altura (cm)
de um cilindro. Calcule e mostre a área (cm2) e o volume (cm3) 
do cilindro.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main () {
	setlocale(LC_ALL,"");
	float v,a,r,h;
	printf("Altura: ",&h);
	scanf("%f",&h);
	printf("Raio: ",&r);
	scanf("%f",&r);
	v = (3,14)*(r*r)*h;
	a = (2*3,14)*r*r+h; 
	printf("Volume:%.2fcm3 ",v);
	printf("área:%.2fcm2 ",a);
	}
