/* Desenvolva um programa que leia o nome e o salário 
de uma pessoa,depois leia o valor do índice percentual
(%) de reajuste do salário.Calcule e apresente na tela,
o valor do novo salário e o nome da pessoa.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");


	char nome[20];
	float s, p, a,sf;

	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("%s Digite seu sálario: ",nome);
	scanf("%f",&s);
	printf("Porcentagem do reajuste de salário: ");
	scanf("%f", &p);
	a = s * p / 100;
	sf = s + a;
	printf("\n O salário de %s será de: \n R$ %.2f " , nome, sf);
	scanf("%f", sf);
	}
