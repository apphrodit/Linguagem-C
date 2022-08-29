/*Faça um programa que imprima na tela os valores no intervalo entre 200 e 1 
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i;
	
	for(i=200; i>=1; i--){
		printf("%d\n",i);	
	}
}
