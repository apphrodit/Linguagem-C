/* Desenvolva um programa que leia o nome e o sal�rio 
de uma pessoa,depois leia o valor do �ndice percentual
(%) de reajuste do sal�rio.Calcule e apresente na tela,
o valor do novo sal�rio e o nome da pessoa.
*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"");


	char nome[20];
	float s, p, a,sf;

	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("%s Digite seu s�lario: ",nome);
	scanf("%f",&s);
	printf("Porcentagem do reajuste de sal�rio: ");
	scanf("%f", &p);
	a = s * p / 100;
	sf = s + a;
	printf("\n O sal�rio de %s ser� de: \n R$ %.2f " , nome, sf);
	scanf("%f", sf);
	}
