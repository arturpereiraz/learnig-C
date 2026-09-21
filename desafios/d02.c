#include <stdio.h>

int main (){
  float saldo=500;
  float deposito;
  float saque;
  int opcao;
  do{
    printf("MENU\n");
    printf("1-Ver saldo\n");
    printf("2-Depositar\n");
    printf("3-Sacar\n");
    printf("4-Sair\n");
    
    printf("Digite umma opção"  );
    scanf("%d",&opcao);
    
    switch(opcao){
      case 1:
        printf("Salado:%.2f\n",saldo);
        break;
      case 2:
        printf("Digite valor do deposito:\n");
        scanf("%f",&deposito);
        saldo+=deposito;
        break;
      case 3:
        printf("Digite valor do saque:\n");
        scanf("%f",&saque);
        saldo-=saque;
        break;
      case 4:
        printf("Programa encerrado\n");
        break;
      default:
        printf("opcao inválida");
    }
  }while(opcao!=4);





}
