/*Desenvolva um programa que leia o pre�o
de um produto e se o pre�o for maior do que 1000 reais
aplique um desconto de 8%. Mostre o pre�o real.
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
	printf("O valor do produto com desconto �:%.2f",preco);
	}
}
