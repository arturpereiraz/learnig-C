#include <stdio.h>

int main(){
  int N;
  int anterior=0, anterior2=1,proximo;
  printf("Digite um número:");
  scanf("%d",&N);
  for (int i=0;i<=N;i++){
    printf("%d\n",proximo);
    proximo=anterior+anterior2;
    anterior=anterior2;
    anterior2=proximo;
  }

}
