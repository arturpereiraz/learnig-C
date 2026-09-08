#include <stdio.h>

int main(){
  int N;
  int fat=1;
  
  printf("Digite um número:");
  scanf("%d",&N);
  
  for(int i =N;i>=1;i--){
      printf("%d\n",i);
      fat=i*fat;
  }
  printf("%d",fat);

}
