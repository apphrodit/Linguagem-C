//Crie uma função que desenhe um retângulo na tela com caracteres, recebendo como parâmetros (largura, altura e caractere).
#include<stdio.h>
#include<locale.h>
void retangulo(int x, int y, char c);
int main(){
	setlocale(LC_ALL,"");
	int l, a;
	char c;
	printf("Digite a largura, altura e caracter do retângulo:\n");
	scanf("%d",&l);
	scanf("%d",&a);
	c = getch();
	retangulo(l, a, c);
}
//Função que desenha um retângulo
void retangulo(int y, int x, char c){
	int i, j;
	for(i = 0; i < y; i++){
		for(j = 0; j < y; j++)
			printf("%c",c);
		printf("\n");
	}
}
