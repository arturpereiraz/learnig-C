#include <stdio.h>

enum statusPedido {Pedente,Processando,Enviado,Entregue, Cancelado};
//È a forma de representar um número com uma palavra

int main(){
  enum statusPedido pedido;
  pedido=Pedente;
  //quando essa variavél é criado ela assume o valor da posição do que digitado, nessa caso como pedente esta na posição 0  pedido assume 0
  for(int i=0;i<=3;i++){
    switch(pedido){
      case Pedente:
        printf("Pedido pedente\n");
        break;
      case Processando:
        printf("Pedido Processando\n");
        break;
      case Enviado:
        printf("Enviado\n");
        break;
      case Entregue:
        printf("Entregue\n");
        break;
      case Cancelado:
        printf("Cancelado");
        break;
    
    }  
    pedido++;
  }

}
