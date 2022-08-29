/*Desenvolva um programa que leia o nome e o preço de uma mercadoria. Se o preço for
menor do que 1000 terá um aumento de 5% no preço da mercadoria, senão o aumento será
de 7%. Mostrar o nome da mercadoria e o seu novo preço
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	char nome[50];
	float preco;
	
	
	printf("Digite o nome da mercadoria: ");	
	scanf("%s",&nome);
	printf("Digite o preco da mercadoria: ");	
	scanf("%f",&preco);
	if (preco<1000)
	printf("O novo preço do(a) %s é: %.2f",nome,preco*1.05 );
	else if (preco>=1000)
	printf("O novo preço do(a) %s é: %.2f",nome,preco*1.07 );
}
