#include <stdio.h>
#include <locale.h>

int main(){
	//CONFIGS E VARIAVEIS
	setlocale(LC_ALL,"");	
	int cor;
	
	printf("Digite a cor do sem�foro \n[1.Verde   ]\n[2.Amarelo ]\n[3.Vermelho]\n");
	scanf("%d",&cor);
	
	if (cor == 1){
		printf("Voc� escolheu verde ent�o pode ir." );
	}else if (cor == 2){
		printf("Voc� escolheu amarelo, ent�o fique atento.\n");
	}else if(cor == 3){
		printf("Voc� escolheu vermelho, ent�o espere.\n");
	}else{
		printf("Op��o Inv�lida.\n");
	}
	printf("\nAcabou.");
}
