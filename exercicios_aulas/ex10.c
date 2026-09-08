#include <stdio.h>

int main (){
  
  float num;
  double x;
  double xnovo;
  double erro;
  
  printf("Digite um número para calcular a raiz:");
  scanf("%f",&num);
  
  x=2;
  
  xnovo=0.5*(x+num/x);
  
  erro=x-xnovo;
  
  if(erro<0){
      erro=erro*(-1);
    }
  printf("%f\n",erro);
  
  x=xnovo;
  
  while(erro>0.0001){
    xnovo=0.5*(x+num/x);
    erro=x-xnovo;
    if(erro<0){
      erro=erro*(-1);
    }
    printf("%f\n",erro);
    x=xnovo;
  }
}
