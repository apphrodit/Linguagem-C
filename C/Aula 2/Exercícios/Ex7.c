/*Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem
que faz entre a fazenda e a fábrica de suco de laranja.
Um alqueire de terra produz em média 250 toneladas de laranjas.
Faça um programa que leia quantos caminhões e quantos alqueires
uma fazenda produtora de laranjas possui, 
calcule e apresente na tela quantas viagens de caminhão serão
necessárias para transportar toda a colheita de laranjas.
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int a,b,c;
	printf("Quantos caminhões possui a fazenda: ");
	scanf("%d",&a);
	printf("Quantos alqueires possui a fazenda: ");
	scanf("%d",&b);
	a = a*18;
	b = b*250;
	c = b/a;
	printf("Serão necessárias %d viagens: ",c);
}
