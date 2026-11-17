#include <stdio.h>

typedef struct {
  char nome[50];
  int idade;
  //50 primeiros
}Pessoa;


union LeituraSensor{
  bytes[2];
  valor_completo;

};

int main(){
  Pessoa p ={"Ana",30};
  Pessoa *ptr =&p;
  union LeituraSensor sensor;
  union LeituraSensor *pont=&sensor;
  
  sensor.bytes[0]=0x2C;
  sensor.bytes[1]=0x01;
  
  
  printf("Nome: %s\n",ptr->nome);
  printf("Endereço nome1:%s\n",&p.nome);
  printf("Endereço Nome: %ld\n",(unsigned long)ptr->nome);
  printf("Idade:%d\n",ptr->idade);
  printf("Endereço idade: %ld\n",(unsigned long)&ptr->idade);
  
  printf("Endereço sensor 1: %ld\n",(unsigned long)&pont->bytes[0]);
  printf("Endereço sensor 2: %ld\n",(unsigned long)&pont->bytes[1]);
  //-> acessa membros de estruturas atraves de ponteiros 



}
