#include <stdio.h>

int main(){
  int saque=0;
  int total=0;
  int qta=0;
  
  while(saque!=999)
    printf("Digite o valor para saque(999-encerrar):");
    scanf("%d",&saque);
    
    if(saque>0 && saque!=0){
      if (saque%10!=0){
        printf("Saque efetuado");
        total+=saque;
        qta++;
      }
      else{
        continue;
      }
        
    }
    
      continue;
    }
printf("%d --- %d",total,qta);
}
}
