/*Desenvolva um programa que leia 6 n�meros inteiros e exiba na tela ao final, o maior
n�mero que foi digitado pelo usu�rio.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int numero,a;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&numero);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o quarto n�mero: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o quinto n�mero: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("Digite o sexto n�mero: ");
	scanf("%d",&a);
	if (a>numero)numero=a;
	printf("O maior n�mero digitado �: %d",numero);
}
