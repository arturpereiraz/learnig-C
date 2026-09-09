#include <stdio.h>

int main (){
  int numeros[5]={5,2,12,15,8};
  float media;
  float soma=0;
  int menor=numeros[0];
  int maior=numeros[0];
  
  for (int i=0;i<5;i++){
    soma+=numeros[i];
    if(numeros[i]>maior){
        maior=numeros[i];
      }
    if (numeros[i]<menor){
        menor=numeros[i];
      }
    
    }
  media=soma/5;
  printf("Média:%f\n",media);
  printf("Maior:%d\n",maior);
  printf("Menor:%d\n",menor);
  
  }

  
