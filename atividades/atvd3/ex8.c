#include <stdio.h>

void formatarTamanho(long bytes){
  
  double megabytes = (double)bytes/(1024*1024);
  
  printf("Tamanho formatado: %.2f MB\n", megabytes);
}
int main(){
  long tamanhoByte = 5242880;
  
  printf("A quantidade bruta de bits sao = %ld\n", tamanhoByte);
  formatarTamanho(tamanhoByte);
}
