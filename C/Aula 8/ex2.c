/*2 - Crie uma função que receba um valor em Celsius e retorne em Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void conv (float celsius);

int main (){
	setlocale(LC_ALL,"")
	float temperatura, fahrenheit;
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &temperatura);
	conv (temperatura);
}

void conv (float celsius){
	
	float fahrenheit = celsius*1.8 + 32;
	printf("\n %.1fº Fahrenheit", fahrenheit);
}
