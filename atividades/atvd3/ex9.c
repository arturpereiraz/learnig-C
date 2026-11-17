#include <stdio.h>
long long calcularFaturamentoTotal(int quantidade, int precoUnitario){
  
  return (long long)quantidade * precoUnitario;

}
int main(){
  int quantidade = 50000;
  int precoUnitario = 100;
  printf("Quantidade = %i\n", quantidade);
  printf("Faturamento = %i\n", precoUnitario);
  long long faturamento = calcularFaturamentoTotal(quantidade, precoUnitario);
  printf("Faturamento total = %lld\n", faturamento);

  return 0;
}
