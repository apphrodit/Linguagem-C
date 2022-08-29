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
		printf("Olá %s você é crianca \n", n);
	}else if(idade < 19){
		printf("Olá %s você é adolescente \n", n);
	}else if(idade < 24){
		printf("Olá %s você é jovem \n", n);
	}else if(idade < 60){
		printf("Olá %s você é de meia idade \n",n);
	}else {
		printf("Olá %s você é idoso \n", n);
	}
	printf("Segundo a OMS (Organização Mundial Da Saúde).");
					
}
