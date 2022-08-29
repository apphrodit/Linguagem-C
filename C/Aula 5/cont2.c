#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int cont;
	for (cont=0;cont<=10;cont+=2){
	printf("%d\n",cont);
	}
}   
