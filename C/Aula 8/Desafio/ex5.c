/*5. Ana maria precisa de mais precis�o no c�lculo da idade, ent�o crie uma fun��o que receba dia,
m�s e ano de nascimento e retorne a idade do competidor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade(int dia, int mes, int ano);

int main (){
	setlocale(LC_ALL,"");
	int dia, mes, ano;
	printf("Digite aqui em que dia voc� nasceu: ");
	scanf("%d", &dia);
	printf("Digite aqui em que m�s voc� nasceu: ");
	scanf("%d", &mes);
	printf("Digite aqui em que ano voc� nasceu: ");
	scanf("%d", &ano);
	printf("Voc� tem %d anos\n Sua inscri��o foi realizada.\n Boa sorte ! ",idade(dia,mes,ano));
}
int idade (int dia, int mes, int ano){
	return 2022 - ano;
}
