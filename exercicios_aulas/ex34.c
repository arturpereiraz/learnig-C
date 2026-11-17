#include <stdio.h>

void imprime_valor(int *m,int n){
  for (int i=0;i<n;i++){
    printf("%d\n",m[i]);
  }
}
void imprime_referencia(int *m,int n){
  for (int i=0;i<n;i++){
    printf("%d\n",&m[i]);
  }
}

int main(){
  int numeros[3]={1,2,3};
  imprime_valor(numeros,3);
  imprime_referencia(numeros,3);
}
