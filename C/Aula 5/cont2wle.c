#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int cont = 0;
	while (cont <= 10){
	printf("%d\n",cont);
	cont+=2;
	}
}
