#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int a,b,c,d,e;
	printf ("Digite um n�mero inteiro: ");
	scanf("%d",&a);
	printf ("Digite outro n�mero inteiro: ");
	scanf("%d",&b);
	printf ("Digite mais um n�mero inteiro: ");
	scanf("%d",&c);
	printf ("Digite outro n�mero inteiro: ");
	scanf("%d",&d);
	e = a + b * c - d;
	printf("A soma dos dois n�meros � %d",e);
	}
	
