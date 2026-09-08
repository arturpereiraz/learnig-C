#include <stdio.h>

int main() {

    int operacao;
    float saldo = 1000;
    float valor;
    float limite;

    
    while (operacao!=5){
        
        printf("---- CAIXA ELETRONICO ----\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Verificar limite\n");
        printf("5 - Encerrar\n");

        printf("Digite uma opcao:\n");
        scanf("%d", &operacao);
        
        switch(operacao) {

          case 1:
              printf("Saldo: R$ %f\n", saldo);
              break;

          case 2:
              printf("Digite o valor do deposito:\n");
              scanf("%f", &valor);

              if(valor > 0) {
                  saldo = saldo + valor;
                  printf("Deposito realizado!\n");
                  printf("Novo saldo: R$ %f\n", saldo);
              }
              else {
                  printf("Valor invalido!\n");
              }

              break;

          case 3:
              printf("Digite o valor do saque:\n");
              scanf("%f", &valor);

              if(valor > 0 && valor <= saldo) {
                  saldo = saldo - valor;
                  printf("Saque realizado!\n");
                  printf("Novo saldo: R$ %f\n", saldo);
              }
              else {
                  if(valor > saldo) {
                      printf("Saldo insuficiente!\n");
                  }
                  else {
                      printf("Valor invalido!\n");
                  }
              }

              break;

          case 4:
              limite = saldo * 0.30;

              printf("Limite disponivel para saque: R$ %f\n", limite);
              break;

          case 5:
              printf("Operacao encerrada!\n");
              break;

          default:
              printf("Opcao invalida!\n");
      }
}
    
}
