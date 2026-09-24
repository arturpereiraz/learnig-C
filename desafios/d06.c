#include <stdio.h>

int main(){
  int linhas;
  
  printf("Digite o números de linhas:");
  scanf("%d",&linhas);
  for (int i=1;i<=linhas;i++){
    for (int j=1;j<=i;j++){
      if (i%2!=0){
        printf("*");
      }
      else{
        continue;
      }
  }
  printf("\n");
}

}
