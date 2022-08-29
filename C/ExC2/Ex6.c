/*Desenvolva um programa que leia 6 números inteiros e exiba na tela ao final, o maior
número que foi digitado pelo usuário.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int numero,a;
	printf("Digite o primeiro número: ");
	scanf("%d",&numero);
	printf("Digite o segundo número: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o terceiro número: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o quarto número: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o quinto número: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o sexto número: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("O maior número digitado é: %d",numero);
}
