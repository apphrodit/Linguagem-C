/*5. Ana maria precisa de mais precisão no cálculo da idade, então crie uma função que receba dia,
mês e ano de nascimento e retorne a idade do competidor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade(int dia, int mes, int ano);

int main (){
	setlocale(LC_ALL,"");
	int dia, mes, ano;
	printf("Digite aqui em que dia você nasceu: ");
	scanf("%d", &dia);
	printf("Digite aqui em que mês você nasceu: ");
	scanf("%d", &mes);
	printf("Digite aqui em que ano você nasceu: ");
	scanf("%d", &ano);
	printf("Você tem %d anos\n Sua inscrição foi realizada.\n Boa sorte ! ",idade(dia,mes,ano));
}
int idade (int dia, int mes, int ano){
	return 2022 - ano;
}
