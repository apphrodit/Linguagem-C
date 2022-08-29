/*Desenvolva um programa que leia o preço
de um produto e se o preço for maior do que 1000 reais
aplique um desconto de 8%. Mostre o preço real.
*/
#include <math.h>
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"");

	
	char nome[50];
	float preco, desconto;
	
	printf("Informe o Produto: ");
	scanf("%s",&nome);
	printf("Digite o valor do produto: ");
	scanf("%f",&preco);
	if(preco>1000){
	desconto= 0.08 * preco;
	preco= preco-desconto;
	printf("O valor do produto com desconto é:%.2f",preco);
	}
}
