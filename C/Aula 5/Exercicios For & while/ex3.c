/*Fa�a um programa onde o usu�rio digite um valor, e imprima na tela
todos os valores entre 0 e o valor digitado.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int	i, valor;
	
	printf("Digite um n�mero: ");
	scanf("%d",&valor);
	
	while (valor<0 || valor>32767){
		printf("Digite o primeiro n�mero: ");
		scanf("%d",&valor);
	}	
	for (i=0; i<=valor; i++){
		printf("%d\n",i);	
	}	
}
