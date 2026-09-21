#include <stdio.h>

int main(){
  float nota;
  float soma=0;
  float media;
  int qta_notas=0;
  
  printf("Digite a quantidade de notas para o cadastro:\n");
  scanf("%d",&qta_notas);
  
  for (int  i=1;i<=qta_notas;i++){
    printf("Digite a %dº nota:\n",i);
    scanf("%f", &nota);
    soma+=nota;
    if (nota>=7){
      printf("Aprovado\n");
    }
    else if(nota>=5 && nota<=6.9){
      printf("Recuperação\n");
    }
    
    else{
      printf("Reprovado\n");
    }
  
  }
media=soma/qta_notas;
printf("Média das notas:%f", media);




}
