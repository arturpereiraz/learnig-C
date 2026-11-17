#include <stdio.h>
#include <string.h>

void parsearLinhaCSV(char csv[]){

  const char delimitadores[] = ";";
  char *rotulos[] = {"Nome", "Idade", "Salario", "Cargo"};
  int i =0;
  
  char *token = strtok(csv, delimitadores);
  
  while (token != NULL) {
    printf("%s: %s\n", rotulos[i], token);
    i++;
    token = strtok(NULL, delimitadores);
    }

}
int main(){
  char csv[] ="Carlos Eduardo;34;9500.00;Desenvolvedor";
  
  printf("A linha bruta eh: %s\n", csv);
  
  parsearLinhaCSV(csv);
  
  return 0;
}
