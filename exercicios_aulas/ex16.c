#include <stdio.h>

int main (){
  int cont=1;
  int senha=1234;
  
  while(cont<=3){
    int tent=0;
    printf("Digite a senha:");
    scanf("%d", &tent);
    if (cont==3){
      printf("Tentativas execedidas");
      break;
    }
    else if(tent==9999){
      printf("Emergência");
      break;
    }
    else if (tent==senha){
      printf("ok");
      break;
    }
    else{
      cont++;
    }
  }
}
