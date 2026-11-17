#include <stdio.h>

int fibonacci(int n){
  if (n<=1){
    return n;
  }
  return fibonacci(n-1)+fibonacci(n-2);

}


int main(){
  int n=7;
  int resul=fibonacci(n);
  printf("Resultado: %d \n ",resul);
  
  for(int i=0;i<=n;i++){
    printf("termo %d = %d\n",i+1,fibonacci(i));
  
  }

}
