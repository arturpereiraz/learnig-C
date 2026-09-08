#include <stdio.h>

int main (){
  int N;
  int soma=0;
  printf("Digite numero:");
  scanf("%d",&N);
  for(int i=1;i<=N;i++){
    if (i%2==0){
      soma += i;
    }
  }
  printf("%d",soma);
}
