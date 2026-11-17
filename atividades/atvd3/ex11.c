#include <stdio.h>
#include <string.h>
int buscarFlagConfig(int argc, char **argv){
  for(int i = 0; i < argc; i++){
    if (strcmp(argv[i], "-env=production") == 0){;
      return 1;
    }
    return 0;
  }
}
  
int main(int argc, char **argv){

  printf("Total de argumentos: %d\n", argc);
  
  int modoProducao = buscarFlagConfig(argc, argv);
  
  if(modoProducao == 1){
    printf("Sistema executando em: Modo Producao\n");
    
  }else {
    printf("Sistema executando em: Modo Desenvolvimento\n");
      }
  return 0;
}
