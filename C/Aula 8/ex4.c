#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int qualEoMaior(int n1, int n2);
int qualEoMaiorVetor(int vetor[10]);
int main (){
	setlocale(LC_ALL,"");
	int n1,n2;
	printf("Digite dois n�meros inteiros: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	printf("O maior n�mero � %d: ",qualEoMaior(n1,n2));
} 
int qualEoMaior(int n1,int n2){
	if(n1 > n2)
		return n1;
	else
		return n2;
}
int qualEoMaiorVetor(int vetor[10]){
	int maior = 0, i;
	for(i = 0; i < 10; i++)
	if(maior < vetor [i])
		maior = vetor[i];
	return maior;
}
