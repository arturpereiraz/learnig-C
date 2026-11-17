#include <stdio.h>

float faturamento[5] = {1200.0, 1800.0, 1500.0, 3000.0, 2100.0};
float faturamentoSuavizado[5];

void calcularMediaMovel(float *faturamento, float *faturamentoSuavizado, int tamanho){

  faturamentoSuavizado[0] = faturamento[0];
  for (int i = 1; i < tamanho - 1; i++){
    faturamentoSuavizado[i] = (faturamento[i - 1] + faturamento[i] + faturamento[i + 1]) / 3.0;
  
  }
  faturamentoSuavizado[tamanho - 1] = faturamento[tamanho - 1];
  
}
int main(){
  for(int i = 0; i < 5; i++){
    printf("Faturamento Bruto ");
    printf("%i = %.1f\n", i + 1, faturamento[i]);
  }
  printf("\n");
  
  calcularMediaMovel(faturamento, faturamentoSuavizado, 5);
  
  for(int i = 0; i < 5; i++){
    printf("Faturamento Suavizado ");
    printf("%i = %.1f\n", i + 1, faturamentoSuavizado[i]);
  }
  
}
