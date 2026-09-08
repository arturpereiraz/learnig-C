#include <stdio.h>

int main(){
  int l1,l2,l3;
  
  printf("Digite o valor do primeiro lado:");
  scanf("%d", &l1);
  
  printf("Digite o valor do segundo lado:"); 
  scanf("%d",&l2);
  
  printf("Digite o valor do terceiro lado:");
  scanf("%d",&l3);
  
  if (l1>0 && l2>0 && l3>0){
    if((l1+l2)>l3 && (l1+l3>l2) && (l2+l3)>l1){
      if(l1==l2 && l3==l2){
        printf("Triângulo equilatero");
      }
      else if(l1!=l2 && l2!=l3){
        printf("Triangulo escaleno");
      }
      else{
        printf("Triangulo isoceles");
      }
      }
    else{
      printf("não forma triangulos");
    }
  }
  else{
    printf("Números negativos");
  }
  
  if ((l1 & 3 )== 0 || (l2 & 3)==0 || (l3 & 3)==0 ){
      printf("Pelo menos um lado PAR");
  }
}
