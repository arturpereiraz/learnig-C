#include <stdio.h>

int main (){
  int altura;
  char simbolo;
  
  printf("Digite a altura:");
  scanf("%d",&altura);
  printf("Digite simbolo para desenho:\n");
  scanf(" %c",&simbolo);

  for (int i=1;i<=altura;i++){
    for (int j=1;j<=i;j++){
      printf("%c",simbolo);
    }
    printf("\n");
  
  } 

}
