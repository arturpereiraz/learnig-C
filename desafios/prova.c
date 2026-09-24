#include <stdio.h>

int main(){
  float saldo=0;
  float saldo_anterior;
  float renda_mensal;
  float perc_aporte;
  float aporte;
  int temp_invest;
  int op;
  
  inicio:
    printf("1-Poupança\n");
    printf("2-CDB Prefixado\n");
    printf("3-Tesouro selic\n");
    printf("0-Sair\n");
    
    printf("Escolha o tipo de investimento:\n");
    scanf("%d",&op);
    
    printf("Tempo de investimento(meses):\n");
    scanf("%d",&temp_invest);
    
    printf("Renda mensal:\n");
    scanf("%f",&renda_mensal);
    
    printf("Porcentagem de aporte:\n");
    scanf(" %f",&perc_aporte);
    float meses_poup[temp_invest];
    float meses_cdb[temp_invest];
    float meses_selic[temp_invest];
    aporte=renda_mensal*(perc_aporte/100);
    
    switch (op){
      
      case 0:
        printf("Programa encerrado");
        
      case 1:
        for (int i=1;i<=temp_invest;i++){
          saldo_anterior= saldo;
          saldo=(saldo_anterior+aporte)*(1+0.005);
          meses_poup[i]=saldo;
        }
        for (int i=1;i<=temp_invest;i++){
            printf("Mês %d:%.2f\n",i,meses_poup[i]);
        }
        
        
        break;
      
      case 2:
         for (int i=1;i<=temp_invest;i++){
          saldo_anterior= saldo;
          saldo=(saldo_anterior+aporte)*(1+0.008);
          meses_cdb[i]=saldo;
        }
        for (int i=1;i<=temp_invest;i++){
            printf("Mês %d:%.2f\n",i,meses_cdb[i]);
        }
        
        break;
      
      case 3:
 
        for (int i=1;i<=temp_invest;i++){
          saldo_anterior= saldo;
          saldo=(saldo_anterior+aporte)*(1+0.0068);
          meses_selic[i]=saldo;
        }
        
        for(int i=1;i<=temp_invest;i++){
          printf("Mês %d:%.2f\n",i,meses_selic[i]);
        } 
       break;
      
      default:
        printf("Opção inválida!Tente novamente");
        goto inicio;
        
    }
  







}
