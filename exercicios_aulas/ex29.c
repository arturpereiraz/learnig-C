#include <stdio.h>

int main (){
  float numeros[5]={10,20,30,40,50};
  float *p = numeros;
  
  printf("Primeiro elemento: %ld\n",(unsigned long)p);
  p++;
  printf("Segundo elemento: %ld\n",(unsigned long)p);
  
  



}
