#include<stdio.h>
#include<locale.h>
int idade(int anoNasc);
int main(){
	setlocale(LC_ALL,"");
	int ano;
	printf("Digite o ano que voc� nasceu:");
	scanf("%d",&ano);
	printf("Voc� tem %d anos",idade(ano));

}
int idade(int anoNasc){
	return 2022-anoNasc;
}
