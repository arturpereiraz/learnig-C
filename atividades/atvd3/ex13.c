#include <stdio.h>
#include <string.h>

struct ClienteSaaS{
  int id;
  int limiteMensal;
  int requisicoesConsumidas;
  int bloqueado;
};

int verificarQuota(struct ClienteSaaS *c){
  if (c->requisicoesConsumidas > c->limiteMensal){
    c->bloqueado = 1;
  }

}
int main(){

  struct ClienteSaaS cliente1 = {1, 10000, 10500, 0};
  
  printf("=== DADOS DO BANCO DE DADOS ===\n");
  printf("Cliente ID: %d\n", cliente1.id);
  printf("Limite Mensal: %d\n", cliente1.limiteMensal);
  printf("Requisicoes Consumidas: %d\n", cliente1.requisicoesConsumidas);
  printf("Status Inicial: %s\n\n", cliente1.bloqueado ? "Bloqueado" : "Ativo");
  
  verificarQuota(&cliente1);
  
  printf("=== STATUS APOS VERIFICACAO DE QUOTA ===\n");
    if (cliente1.bloqueado == 1) {
        printf("ALERTA: Acesso do cliente SUSPENSO! (Limite excedido)\n");
    } else {
        printf("Sucesso: Cliente dentro da quota permitida.\n");
    }

    return 0;
}
