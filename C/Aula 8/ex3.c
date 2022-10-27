/*3 - Crie uma função que receba um valor em Fahrenheit e retorne em Celsius.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void conv (float fahrenheit);

int main (){
	setlocale(LC_ALL,"");
	float temperatura, celsius;
		printf("Digite a temperatura em graus Fahrenheit: ");
		scanf("%f", &temperatura);
			conv (temperatura);
}
	void conv ( float fahrenheit){
		float celsius = (fahrenheit - 32) / 1.8;
			printf("\n %.1f° Celsius", celsius);
	}
