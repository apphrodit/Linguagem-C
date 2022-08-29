/*Faça um programa onde o usuário digita 15 valores e imprima a soma destes valores
na tela.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

	int i;

	int valores;
	
	int acumulador=0;

	for(i=0; i <15; i++){
		valores=-1;
		while(valores< 0 || valores>32767){
			printf("Digite %dº valor: ", i+1);
			scanf("%d",&valores);
		}
		acumulador+=valores;
	}
	printf("A soma dos 15 valores digitados é %d", acumulador);
}
	
	
