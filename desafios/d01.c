#include <stdio.h>

int main(){
  int idade;
  conferir_idade:
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    if(idade<0 || idade >120) {
      printf("idade invalida.\n");
      goto conferir_idade;
    }
    
    else if(idade<18){
      printf("Menor de idade.\n");
    
    }
    
    else if(idade>=18){
      printf("Menor de idade\n");  
    
    }


}
