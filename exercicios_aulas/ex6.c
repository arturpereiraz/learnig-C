#include <stdio.h>

int main(){
  int temperatura;
  printf("Digite a temperatura atual:(graus Celsius)");
  scanf("%d", &temperatura);
  
  if (temperatura>=35){
    printf("Alerta: Muito quente! Beba bastante agua \n");
  }
  else if (temperatura>=25){
    printf("Clima quente. Dia bom para ir para praia \n");
  }
  else if (temperatura>=15){
    printf("Clima agradável \n");
  }
  else if (temperatura>=5){
    printf("Clima frio \n");
  }
  else{
    printf("Alerta: Muito frio! \n");
  }
  
  return 0;

}
