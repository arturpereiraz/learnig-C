#include <stdio.h>
#include <string.h>
int main (){
  char mensagem [] ="Alerta: Sensor 01 OK";
  int tamanho = 0;
  
  while (mensagem[tamanho]!= '\0'){
    tamanho++;
  }
  
  printf("Tamanho da mensagem: %d caracteres.\n",tamanho);
  
  if (tamanho>20){
    printf("Erro:Mensagem exece limite");
  }
  else{
    printf("Mensagem enviada");
  }
}
