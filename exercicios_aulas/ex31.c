#include <stdio.h>

int main (){
  float temperatura, *pt;
  
  temperatura=20;
  
  printf("Valor de temperatura:%f\n",temperatura);
  printf("Valor da memória:%p\n",&temperatura);
  pt=&temperatura;
  *pt=30;
  printf("Valor de memória:%p\n",pt);
  printf("Valor de temperatura:%f\n",*pt);
  //* o valor que o ponteiro aponta uso para fazer as alterações


}
