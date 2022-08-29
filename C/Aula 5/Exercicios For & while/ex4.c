/*Faça um programa onde o usuário digite dois valores, e imprima na tela
todos os valores no intervalo entre os valores digitados.
*/
#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, val1 =-1, val2=-1;
	
	while (val1 < 0 || val1>32767){
		printf("Digite o primeiro número: ");
		scanf("%d", &val1);
	}
	while (val2 < 0 || val2 > 32767){
		printf("Digite o segundo número: ");
		scanf("%d", &val2);
}
	if (val2 < val1){
		i=val1;
		val1 = val2;
		val2 = i;
	for (val1>0; val1 <= val2; val1++){
		printf("%d\n",val1);
	}
}

}

