/*Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. Se o pre�o for
menor do que 1000 ter� um aumento de 5% no pre�o da mercadoria, sen�o o aumento ser�
de 7%. Mostrar o nome da mercadoria e o seu novo pre�o
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
	printf("O novo pre�o do(a) %s �: %.2f",nome,preco*1.05 );
	else if (preco>=1000)
	printf("O novo pre�o do(a) %s �: %.2f",nome,preco*1.07 );
}
