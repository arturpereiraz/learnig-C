#include <stdio.h>

int main(){ 
	float CAMINHAO = 0.02;
	float TRATOR = 0.005;
	float FURGAO = 0.012;
	int opcao;
	float km_base = 0.0;
	float km_novo = 0.0;

	printf("######### MENU ########\n");
	printf("1- CAMINHAO PESADO\n");
	printf("2- TRATO AGRICOLA\n");
	printf("3- FURGAO DE CARGA\n");
	printf("0- SAIR\n");
	printf("Digite a opcao que voce deseja: ");
	scanf("%i", &opcao);
	
		
		
	switch(opcao){
			case 1:
				for (int i = 1; i < 13; i++){
					km_base = ((km_base + 1500)*(1+CAMINHAO));
					printf("%d- %.2fkm \n", i, km_base);
					km_novo += km_base;
					}
					break;

			case 2:
				for (int i = 1; i < 13; i++){
					km_base = ((km_base + 1500)*(1+TRATOR));
					printf("%d- %.2fkm \n", i, km_base);
					km_novo += km_base;
					}
					break;
				
			case 3:
				for (int i = 1; i < 13; i++){
					km_base = ((km_base + 1500)*(1+FURGAO));
					printf("%d- %.2fkm \n", i, km_base);
					km_novo += km_base;
					}
					break;

			case 0:
				printf("Programa Encerrado");
				break;

			default:
				printf("Digite uma opcao valida");
				break;
	}

}
prova.c
Exibindo prova.c.
