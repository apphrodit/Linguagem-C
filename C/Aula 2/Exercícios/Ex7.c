/*Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem
que faz entre a fazenda e a f�brica de suco de laranja.
Um alqueire de terra produz em m�dia 250 toneladas de laranjas.
Fa�a um programa que leia quantos caminh�es e quantos alqueires
uma fazenda produtora de laranjas possui, 
calcule e apresente na tela quantas viagens de caminh�o ser�o
necess�rias para transportar toda a colheita de laranjas.
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int a,b,c;
	printf("Quantos caminh�es possui a fazenda: ");
	scanf("%d",&a);
	printf("Quantos alqueires possui a fazenda: ");
	scanf("%d",&b);
	a = a*18;
	b = b*250;
	c = b/a;
	printf("Ser�o necess�rias %d viagens: ",c);
}
