//Crie uma fun��o que calcule o fatorial de um n�mero.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial (int n);
int main(){
	setlocale(LC_ALL,"");
	int n1,fatorial,n, i;
	printf("Digite um n�mero inteiro para saber o seu fatorial: ");
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
