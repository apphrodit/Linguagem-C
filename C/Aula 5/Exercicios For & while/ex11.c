/*Escreva um programa que exiba na tela a tabuada de um n�mero que dever� ser informa-
do pelo usu�rio
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int x = -1, i;
	
	while(x < 0 || x > 10){
		printf("Digite um n�mero de 0 a 10: ");
		scanf("%d",&x);
	}
	for(i = 0; i <= 10; i++);
		printf("%d x %d = %d\n",x,i,(x*i));
}
