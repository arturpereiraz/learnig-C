#include <stdio.h>

int main(){
  float num1;
  float num2;
  char operacao;
  
  printf("1-Soma\n");
  printf("2-Subtração\n");
  printf("3-Divisão\n");
  printf("4-Multiplicação\n");
  
  printf("Numero 1:\n");
  scanf("%f",&num1);
  printf("Número 2:\n");
  scanf("%f",&num2);
  printf("Operação:");
  scanf(" %c",&operacao);
  
  switch(operacao){
    
    case '1':
      printf("Soma:%f",num1+num2);
      break;
  
    case '2':
      printf("Subtração:%f",num1-num2);
      break;
  
    case '3':
      printf("Divisão:%f",num1/num2);
      break;
  
    case '4':
      printf("Multiplicação:%f",num1*num2);
      break;
  
  
  }


}
