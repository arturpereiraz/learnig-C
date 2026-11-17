#include <stdio.h>
#include <string.h> 

void removerEspaco(char *str){
  int inicio = 0;
  int fim = strlen(str) - 1;
  
  while (str[inicio] == ' ') {
        inicio++;
    }
  while (fim >= inicio && str[fim] == ' ') {
        fim--;
    }
  int j = 0;
  for (int i = inicio; i <= fim; i++) {
        str[j] = str[i];
        j++;
    }
  str[j] = '\0';
}


int main(){
  char nomeUsuario[] = "  User_Dev  ";
  
  printf("Original = (%s) - Tamanho = (%lu)\n",nomeUsuario, strlen(nomeUsuario));
  
  removerEspaco(nomeUsuario);
  
  printf("Depois = (%s) - Tamanho = (%lu)\n",nomeUsuario, strlen(nomeUsuario));
  
  return 0;
}
