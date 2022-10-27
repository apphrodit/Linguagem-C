/*4. Para participar dos campeonatos os competidores preenchem um formulário com sua data de nascimento,
crie uma função que receba o ano de nascimento e retorne a idade do competidor.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade (int ano);
int main (){
	setlocale(LC_ALL,"");
	int ano;
	
	printf("Digite em que ano você nasceu: ");
	scanf("%d",&ano);
	
	printf("Você tem %d anos.\n Sua inscrição foi realizada.", idade(ano));	
}
	int idade (int ano){
	
	return 2022 - ano;
}
