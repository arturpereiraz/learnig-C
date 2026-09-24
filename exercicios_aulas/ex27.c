#include <stdio.h>


int menu(){
  int opc;
  printf("1-Soma\n");
  printf("2-Subtração\n");
  printf("3-Multiplicação\n");
  printf("4-Divisão\n");
  printf("0-Sair\n");
  printf("Digite uma opção:");
  scanf("%d",&opc);
  return opc;
}

int soma(int a=2,int b=1){
  return a+b;

}
int calculadora(int operacao,soma){
  switch (operacao){
    case 1:
      return soma();
      
  
  
  
  }
  


}

int main(){
  int operacao=0;
  do {
    operacao=menu();
    printf("Sua opção foi:%d",operacao); 
    calculadora(operacao,soma);
  
  
  }while(operacao!=0);

}
