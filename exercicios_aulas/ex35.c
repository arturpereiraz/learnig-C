#include <stdio.h>

int fat(int n){
  if (n<=1){
    return 1;
  }
  return n* fat(n-1);

}



int main(){
  int teste=fat(5);
  printf("Fatorial= %d\n",teste);
}
 
 
 
