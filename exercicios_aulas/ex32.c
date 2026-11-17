#include <stdio.h>

void aumentar_temp(float *t){
  *t=*t+2;


}


int main(){
  float temperatura=25;
  printf("Temperatura inicial:%f\n", temperatura);
  
  aumentar_temp(&temperatura);
  
  printf("Temperatura atual:%f\n",temperatura);
  
  






}
