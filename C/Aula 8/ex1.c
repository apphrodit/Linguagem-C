#include<stdio.h>
#include<locale.h>
int decBin(int n); //Assinatura da fun��o
int main(){
	setlocale(LC_ALL,"");
	int num;
	printf("Digite o n�mero inteiro que ser� convertido em binario: ");
	scanf("%d",&num);
	printf("O n�mero %d em bin�rio � ",decBin(num));
}
//Fun��o que converte um n�mero inteiro em bin�rio usando recursividade
int decBin(int n){
	if(n == 0)
		return 0;
	else
		return n % 2 + 10 * decBin(n / 2);
}
