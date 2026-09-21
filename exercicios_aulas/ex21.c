#include <stdio.h>

int main (){
  int qta_cadastro;
  int id_consulta;
  int i;
  int encontrado=0;
  printf("Quantos usuários quer cadastrar:");
  scanf("%d",&qta_cadastro);
  int pessoal[qta_cadastro][4];
  
  for(i=0;i<qta_cadastro;i++){
    printf("Digite um id:");
    scanf("%d",&pessoal[i][0]);
    printf("Digite a idade:");
    scanf("%d",&pessoal[i][1]);
    printf("Digite número de depedentes:");
    scanf("%d",&pessoal[i][2]);
    printf("Digite a renda mensal:");
    scanf("%d",&pessoal[i][3]);
  }

  printf("\nDigite o ID para consultar:");
  scanf("%d",&id_consulta);
  
  for (i=0;i<qta_cadastro;i++){
  
    if (pessoal[i][0]==id_consulta){
    
      printf("Usuário encontrado");
      encontrado=1;
    
    }
    
    if(encontrado==0){
      printf("\nUsuário não encontrado!\n");
    
    }
  
  
  
  
  
  }






}
