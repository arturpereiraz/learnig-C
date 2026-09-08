#include <stdio.h>

int main() {

    int n1,n2,op, valor;

    printf("---- OPERAÇÂO BIT A BIT ----\n");
    printf("1-E bit a bit (&)\n");
    printf("2-OU bit a bit (|)\n");
    printf("3-OU exclusivo (^)\n");
    printf("4-Deslocamento à esquerda (<<)\n");
    printf("5-Deslocamento à direita (>>)\n");

    printf("Digite o n1:\n");
    scanf("%d", &n1);
    
    printf("Digite o n2:\n");
    scanf("%d", &n2);
    
    printf("Digite a operação:\n");
    scanf("%d", &op);
    
    
    if ( n1>0 && n2>0){
     
     switch(op){
       case 1:
        valor=n1 & n2;
        printf("%d & %d \n",n1,n2);
        printf("%d em decimal %x em hexadecimal\n", valor,valor);
        break;
        
       case 2:
        valor=n1 | n2;
        printf("%d | %d \n",n1,n2);
        printf("%d em decimal %x em hexadecimal\n", valor,valor);
        break;
        
       case 3:
        valor=n1 ^ n2;
        printf("%d ^ %d \n",n1,n2);
        printf("%d em decimal %x em hexadecimal\n", valor,valor);
        break;
        
       case 4:
        valor=n1 << n2;
        printf("%d << %d \n",n1,n2);
        printf("%d em decimal %x em hexadecimal\n", valor,valor);
        break;
        
       case 5:
        valor=n1 >> n2;
        printf("%d >> %d \n",n1,n2);
        printf("%d em decimal %x em hexadecimal\n", valor,valor);
        break;
      
      default:
        printf("Operação inválida");
     
     }
    
    
    }
    
    else{
        printf("Valores não podem ser negativos");
    
    
    }
  }
