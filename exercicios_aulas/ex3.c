#include <stdio.h>

int main(){
  int valor1,valor2;
  
  printf("Digite o primeiro valor:");
  scanf("%d", &valor1);
  
  printf("Digite o segundo valor:");
  scanf("%d", &valor2);
  
  
  printf("---RESULTADOS---\n");
  
  printf("Soma: %d + %d = %d\n",valor1, valor2, valor1+valor2);
  printf("Subtração: %d - %d = %d\n", valor1, valor2, valor1-valor2);
  printf("Multiplicação: %d * %d = %d\n", valor1,valor2, valor1*valor2);
  printf("Divisão: %d / %d = %d\n", valor1, valor2, valor2, valor1/valor2);
  printf("Resto da divisão: %d %%| %d =%d\n", valor1,valor2,valor1%valor2);




}
