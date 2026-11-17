#include <stdio.h>


struct ItemPedido{
  char nome[30];
  int quantidade;
  float precoUnitario;
};

float calcularTotalPedido(struct ItemPedido itens[], int tamanho){
  float total = 0.0;
  for (int i = 0; i < tamanho; i++) {
        total += itens[i].quantidade * itens[i].precoUnitario;
    }
    
    return total;
}

int main() {
  struct ItemPedido carrinho[3] = {
        {"Teclado Mecanico", 2, 150.00},
        {"Mouse Gamer", 1, 80.00},
        {"Monitor Gamer", 1, 900.00}
  };
  printf("--- CARRINHO DE COMPRAS ---\n");
  for (int i = 0; i < 3; i++) {
      printf("Item: %-18s | Qtd: %d | Preco: R$ %.2f\n",  carrinho[i].nome, carrinho[i].quantidade, carrinho[i].precoUnitario);
  }
  float totalFinal = calcularTotalPedido(carrinho, 3);
  
  printf("Valor Total do Pedido: R$ %.2f\n", totalFinal);

   return 0;
}


