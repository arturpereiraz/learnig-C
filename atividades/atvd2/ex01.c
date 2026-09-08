#include <stdio.h>

int main(){

int cod_prod,qta_venda=0;
float val_venda, media_vendas;
float tot_venda=0;

while (cod_prod!=-1){

  printf("Digite o código do  produto:\n");
  scanf("%d",&cod_prod);
  
  if (cod_prod==-1){
    break;
  }
  else{
    printf("Digite o valor da venda:\n");
    scanf("%f",&val_venda);
    
    if (val_venda>0){
      qta_venda++;
      tot_venda+=val_venda;
      printf("Venda registrada com sucesso\n");
    }
    
    else{
      printf("Valor inválido!Venda ingnorada.\n");
      continue;
    }
  }
}
if(qta_venda>0){
  media_vendas=tot_venda/qta_venda;
  printf("Total de vendas: %d \n", qta_venda);
  printf("Valor arrecadado: R$ %.2f\n", tot_venda);
  printf("Média de vendas: R$ %.2f",media_vendas);
} 

else{

  printf("Nenhuma Venda registrada.\n");
}












}
