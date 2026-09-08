#include <stdio.h>

int main(){
  int consumo;
  
  printf("Digite o consumo em kWh:");
  scanf("%d", &consumo);
  
  if(consumo>0){
    if(consumo<=100){
      printf("O  valor da conta é= %f \n", consumo*0.50);
    
    }
    
    else if (consumo<=200){
      printf("O  valor da conta é= %f \n", consumo*0.75);
    }
    
    else if (consumo>200){
      if (consumo>500){
        printf("O  valor da conta é= %f \n", consumo*1.20+consumo*0.15);
      
      }
    
      else{
      printf("O  valor da conta é= %f \n", consumo*1.20);
      }
    }
  }
  else{
    printf("Cosumo inválido \n");
  }
  
  if((consumo&7)==0){
    printf("Consumo múltiplo de 8 \n");
  }

}
