#include <stdio.h>

int main (){
  int matriz[3][3];
  int soma=0;
  for (int i=0;i<=3;i++){
    for (int j=0;j<=3;j++){
      printf("Digite o elemento[%d][%d]",i,j);
      scanf("%d", &matriz[i][j]);
      soma+=matriz[i][j];
    }
  
  }
  printf("O valor da soma é %d\n",soma);


}
