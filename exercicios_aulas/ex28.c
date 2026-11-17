#include <stdio.h>

int main (){
  int idade=20;
  int *pIdade=&idade;
  
  printf("Valor de idade:%d\n",idade);
  printf("Enderenço de idade:%p\n",&idade);
  printf("Endereço armazenado em pIdade:%p\n",pIdade);
  printf("Valor em pIdade: %d\n",*pIdade);
  



}
