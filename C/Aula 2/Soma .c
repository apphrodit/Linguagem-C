#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int a,b,c,d,e;
	printf ("Digite um número inteiro: ");
	scanf("%d",&a);
	printf ("Digite outro número inteiro: ");
	scanf("%d",&b);
	printf ("Digite mais um número inteiro: ");
	scanf("%d",&c);
	printf ("Digite outro número inteiro: ");
	scanf("%d",&d);
	e = a + b * c - d;
	printf("A soma dos dois números é %d",e);
	}
	
