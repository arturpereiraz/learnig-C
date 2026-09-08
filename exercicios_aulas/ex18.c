#include <stdio.h>

int main (){
  int idade;
  
  printf("Digite sua idade:");
  scanf("%d",&idade);
  
  if (idade<0){
      goto erro;
      }
  erro:
    printf("Idade iválida");
    return 1;
    
  printf("Voçê tem %d anos", idade);
  
  




}
