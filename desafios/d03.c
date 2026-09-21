#include <stdio.h>

int main (){
  int num=1;
  int soma=0;
  int qta_pares=0;
  
  while(num!=0){
    printf("Digite um número:\n");
    scanf("%d",&num);
    
    if(num==0){
      break;
    }
    
    else if(num%2!=0 || num<0){
      printf("Número ingnorado.\n");
      continue;
    
    }
    else{
      soma+=num;
      qta_pares++;
    }  
  }
  
  printf("Soma:%d\n", soma);
  printf("Quantidade de pares:%d",qta_pares);
  



}
