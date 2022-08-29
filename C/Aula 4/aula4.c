#include <stdio.h>
#include <locale.h>

int main(){
	//CONFIGS E VARIAVEIS
	setlocale(LC_ALL,"");	
	int cor;
	
	printf("Digite a cor do semáforo \n[1.Verde   ]\n[2.Amarelo ]\n[3.Vermelho]\n");
	scanf("%d",&cor);
	
	if (cor == 1){
		printf("Você escolheu verde então pode ir." );
	}else if (cor == 2){
		printf("Você escolheu amarelo, então fique atento.\n");
	}else if(cor == 3){
		printf("Você escolheu vermelho, então espere.\n");
	}else{
		printf("Opção Inválida.\n");
	}
	printf("\nAcabou.");
}
