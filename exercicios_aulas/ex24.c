#include <stdio.h>

typedef struct{
  char nome[50];
  float preco;
  int qta;
}Produto;

int main (){
  
  Produto prod1={"tênis",120,10};
  
  printf("Valor investido:%.2f",prod1.preco*prod1.qta);

}
