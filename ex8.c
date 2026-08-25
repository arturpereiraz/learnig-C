#include <stdio.h>

int main(){
  int valor1,valor2,opcao;
  
  printf("1-Soma\n");
  printf("2-Subtração\n");
  printf("3-Multiplicação\n");
  printf("4-Divisão\n");
  printf("5-Resto\n");
  printf("Escolha uma opção:");
  scanf("%d",&opcao);
  
  
  printf("Digite o primeiro valor:");
  scanf("%d", &valor1);
  printf("Digite o segundo valor:");
  scanf("%d", &valor2);
  
  switch (opcao){
    case 1:
      printf("Soma: %d + %d = %d\n",valor1, valor2, valor1+valor2);
      break;
    case 2:
      printf("Subtração: %d - %d = %d\n", valor1, valor2, valor1-valor2);
      break;
    case 3:
      printf("Multiplicação: %d * %d = %d\n", valor1,valor2, valor1*valor2);
      break;
    case 4:
      printf("Divisão: %d / %d = %d\n", valor1, valor2, valor2, valor1/valor2);
      break;
    case 5:
      printf("Resto da divisão: %d %%| %d =%d\n", valor1,valor2,valor1%valor2);
      break;
    default:
      printf("Opção inválida!");  
  }
  
  return 0;
  
}
