#include <stdio.h>
#include <locale.h>

int main(){
	//CONFIGS E VARIAVEIS
	setlocale(LC_ALL,"");	
	int cor;
	
	printf("Digite a cor do sem�foro \n[1.Verde   ]\n[2.Amarelo ]\n[3.Vermelho]\n");
	scanf("%d",&cor);
	
	if (strcmp(cor == Verde) == 0){
		sprintf(result,"Pode ir");
	}else if (strcmp(cor == Amarelo) == 0){
		sprintf(result,"espere");
	}else if(strcmp(cor == Vermelho) == 0){
		sprintf(result, "espere");
	}else{
		sprintf(result,"espere");
	}else{
		sprintf(result,"cor inv�lida para sem�foro");
	}
	
	printf("Voc� Digitou a cor %s \n",cor);
	printf("Por isso %s \n",)
