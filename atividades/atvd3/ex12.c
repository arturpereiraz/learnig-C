#include <stdio.h>


void consolidarTotais(float matriz[3][4], float totais[3]) {
    for (int i = 0; i < 3; i++) {
        totais[i] = 0; 
        for (int j = 0; j < 4; j++) {
            totais[i] += matriz[i][j];
        }
    }
}

int main() {
    float vendasRegionais[3][4] = {
        {1000.0, 1500.0, 1200.0, 2000.0}, 
        {800.0,  950.0,  1100.0, 1300.0}, 
        {2500.0, 2100.0, 1900.0, 2800.0}  
    };
    float totaisAnuais[3];
    
    printf("=== MATRIZ DE VENDAS  ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Regiao %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("R$ %.2f\t", vendasRegionais[i][j]);
        }
        printf("\n");
    }

    consolidarTotais(vendasRegionais, totaisAnuais);

    printf("\n=== FATURAMENTO TOTAL POR REGIAO ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Total Regiao %d: R$ %.2f\n", i + 1, totaisAnuais[i]);
    }

    return 0;
}
