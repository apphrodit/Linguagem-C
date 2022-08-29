/*Faça um programa que imprima na tela os valores no intervalo entre 10 e 200
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i;
	
	for (i=1; i<=200; i ++){
		printf("%d\n",i);
	}
}
