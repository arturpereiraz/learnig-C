#include <stdio.h>

int main (){
  int ano;
  
  printf("Digite um ano:");
  scanf("%d", &ano);
  
  if((ano & 3)==0 && ano%100!=0 || ano%400==0){
    printf("Ano bissexto \n");
  }  
  else{
    printf("Não é ano bissexto\n");
  }
  
  if ((ano&1)==0){
    printf("Ano par \n");
  }
  else{
    printf("Ano ímpar \n");
  }
  
  return 0;

}
