#include <stdio.h>

int main(){
  char nome_produto [20];
  int qta_estoque, opcao;
  int qta_produtos=0;
  float preco,total_estoque;
  
  do{
    printf("====SUPERMERCADO====\n");
    printf("1 - Adicionar produto\n");
    printf("2 - Listar produtos\n");
    printf("3 - Calcular valor total do estoque\n");
    printf("4 - Sair\n");
    
    printf("Digite uma opção:\n");
    scanf("%d",&opcao);
    
    switch(opcao){
      
      case 1:
      
        qta_produtos++;
        printf("Nome do produto:\n"); 
        scanf("%s",&nome_produto);
        
        printf("Quantiade em estoque:\n");
        scanf("%d",&qta_estoque);
        
        printf("Preço unitário:\n");  
        scanf("%f",&preco);
        
        printf("Cadastro confirmado\n");
        
        break;
      
      case 2:
      
        printf("Nome do produto: %s\n", nome_produto);
        printf("Quantidade do estoque: %d\n", qta_estoque);
        printf("Preço: %s\n", nome_produto);
        
        break;
      
  
      
      case 3:
        total_estoque=qta_estoque*preco;
        printf("Valor total do estoque: %.2f\n",total_estoque);
        
        break;
        
      case 4:
        printf("Encerrando o sistema...");
        
        break;
        
      default:
        printf("Opção inválida");
  }
  
  } while (opcao!=4);
  

}
