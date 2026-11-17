#include <stdio.h>


int datacenter[4][4] = {{1, 1, 0, 1},
                        {1, 0, 1, 0},
                        {0, 0, 0, 1},
                        {1, 0, 1, 0}

};
float calcularTaxaOcupacao(int datacenter[4][4], float *porcentagem, int *ocupados){
  *ocupados = 0;
  for(int col = 0; col < 4; col++){
    for(int lin = 0; lin < 4; lin++){
      if(datacenter[lin][col] == 1){
        (*ocupados)++;
      }
    }
  }
  *porcentagem = (*ocupados/16.0)*100;
}

int contarRacksLivres(int datacenter[4][4], int fileira){
  int vagos = 0;
  
   for(int col = 0; col < 4; col++){
      if(datacenter[fileira][col] == 0){
        vagos++;
      }
    }
    return vagos;
}

int main(){
  float porcentagem;
  int ocupados;
  
  for(int col = 0; col < 4; col++){
    for(int lin = 0; lin < 4; lin++){
      printf(" [%d] ", datacenter[lin][col]);
    }
    printf("\n");
  }
  printf("\n");
  
  calcularTaxaOcupacao(datacenter, &porcentagem, &ocupados);
  int livresFileira2 = contarRacksLivres(datacenter, 2);
  
  printf("Total de racks ocupados: %d/16\n", ocupados);
  printf("A porcentagem de racks ocupados eh = %.2f\n", porcentagem);
  printf("Racks vagos na Fileira 2: %d\n", livresFileira2);
  
  return 0;
  
}


