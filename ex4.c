#include <stdio.h>

int main(){
  int a,b;
  
  printf("Digite dois números:");
  scanf("%d %d", &a, &b );
  //Ele ler os dois valores por conta do espaço
  
  printf("a==b : %d\n", a==b);
  printf("a!=b : %d\n", a!=b);
  printf("a>b : %d\n", a >b);
  printf("a<b : %d\n", a<b);
  printf("a>=b : %d\n", a>=b);
  printf("a<=b : %d\n", a <=b);
  
  return 0;

}
