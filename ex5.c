#include <stdio.h>

int main (){
  int a=5, b=3;
  int c= a & b;
  int d= a | b;
  int e= a^b;
  int g= ~a;
  int f=8;
  int esq = f >>1;
  int dir = f<<1;
  
  printf("%d\n", c);
  printf("%d\n",d);
  printf("%d\n",e);
  printf("%d\n",g);
  printf("%d %d\n", esq,dir);

}
