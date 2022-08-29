/*Desenvolva um programa que leia três 
variáveis (a, b, c)
e resolva a expressão: ( a + b ) / c.
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,""); // Coloca acentos
	//Configuração das variáveis
	int a,b,c,d; // Este programa utiliza 128 bits 32 bytes
	printf ("Digite um numero: ");
	scanf ("%d",&a);
	printf ("Digite outro numero: ");
	scanf ("%d",&b);
	printf ("Digite outro numero: ");
	scanf ("%d",&c);

	// Processamento
	d = (a+b) / c;
	
	//Saída do programa
	printf ("O resultado dessa expressão é; %d",d);
}
