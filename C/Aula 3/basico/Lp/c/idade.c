#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int idade;
	char n[50];
	printf("Digite o nome da pessoa:");
	scanf("%s", &n);
	printf("Digite a idade da pessoa:");
	scanf("%d",&idade);
	
	//processamento
	if(idade < 10){
		printf("Ol� %s voc� � crianca \n", n);
	}else if(idade < 19){
		printf("Ol� %s voc� � adolescente \n", n);
	}else if(idade < 24){
		printf("Ol� %s voc� � jovem \n", n);
	}else if(idade < 60){
		printf("Ol� %s voc� � de meia idade \n",n);
	}else {
		printf("Ol� %s voc� � idoso \n", n);
	}
	printf("Segundo a OMS (Organiza��o Mundial Da Sa�de).");
					
}
