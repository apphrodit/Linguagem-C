//Crie uma função que calcule o fatorial de um número.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial (int n);
int main(){
	setlocale(LC_ALL,"");
	int n1,fatorial,n, i;
	printf("Digite um número inteiro para saber o seu fatorial: ");
	scanf("%d",&n);
	printf("\nFatorial calculado: %d", fatorial(n));
}
int fatorial (int n){
	int i;
	for(i = n; i >= 0; i--){
		int fatorial = fatorial * n;
		return fatorial;
	}
}
