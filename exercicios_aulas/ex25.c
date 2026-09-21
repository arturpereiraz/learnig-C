#include <stdio.h>

union sensor{
  short int valor_completo;
  unsigned char l[2];
};

int main(){
  union sensor s;
  printf("Digite o valor mais baixo:");
  scanf("%d",&s.l[0]);
  
  printf("Digite o valor mais alto:");
  scanf("%d",&s.l[1]);
  
  printf("%d",s.valor_completo);
  
}
