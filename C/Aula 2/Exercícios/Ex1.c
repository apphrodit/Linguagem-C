/*Desenvolva um programa que leia tr�s 
vari�veis (a, b, c)
e resolva a express�o: ( a + b ) / c.
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,""); // Coloca acentos
	//Configura��o das vari�veis
	int a,b,c,d; // Este programa utiliza 128 bits 32 bytes
	printf ("Digite um numero: ");
	scanf ("%d",&a);
	printf ("Digite outro numero: ");
	scanf ("%d",&b);
	printf ("Digite outro numero: ");
	scanf ("%d",&c);

	// Processamento
	d = (a+b) / c;
	
	//Sa�da do programa
	printf ("O resultado dessa express�o �; %d",d);
}
