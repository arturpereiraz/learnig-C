#include <stdio.h>

void atualizar_Veiculo(float *v,float *c){
  *v=*v+10;
  *c=*c-2.5;
}



int main (){
  float combustivel=40;
  float velocidade=60;
  
  printf("Velocidade:%.2f\n",velocidade);
  printf("Combustivél:%.2f\n",combustivel);
  
  
  atualizar_Veiculo(&velocidade,&combustivel);

  printf("Velocidade:%.2f\n",velocidade);
  printf("Combustivél:%.2f\n",combustivel);


}
