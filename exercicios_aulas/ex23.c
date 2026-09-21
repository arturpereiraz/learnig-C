#include <stdio.h>
#include <string.h>

int main (){
  char dominio[100];
  char url[]="https://www.google.com";
  
  //1.strncmp:compara apenas os 8 primeros caracteres
  if (strncmp(url,"https://",8)==0){
    printf("Conexão segura\n");
    
    //2.strcpy:copia a sring a partir do caractere apos 'https://'
    strcpy(dominio,url+8);    
    //3.strchr: busca a primeiraa ocorrencia da barra'/'
    char *primeira_barra=strchr(dominio,'/');

    if(primeira_barra!=NULL){
      //Insere caractere nulo '\0' no lugar da barra para truncar string
      *primeira_barra='\0';
    }
    printf("Dominio extraido: %s\n",dominio);
  }
  else{
  
    printf("Deu errado");
  }





}
