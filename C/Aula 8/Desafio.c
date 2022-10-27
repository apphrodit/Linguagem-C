#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float altura, largura;
	
	printf("Digite a altura do retângulo: ");
	scanf("%f", &altura);
	printf("Digite a largura do retângulo: ");
	scanf("%f", &largura);
	printf("Digite o caractere que você deseja que o retângulo seja feito: ");
	scanf("%c", &car);
}

