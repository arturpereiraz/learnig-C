#include <stdio.h>
#include <stdint.h>

union CacheVal{
  uint32_t contadorAcessos;
  float percentualUso;
};

void atualizarCacheParaFloat(union CacheVal *cache, float valor){
  cache->percentualUso = valor;
}

int main(){
  union CacheVal meuCache;
  meuCache.contadorAcessos = 15000;
  
  printf("--- ANTES ---\n");
  printf("Contador de Acessos: %u\n\n", meuCache.contadorAcessos);
  
  atualizarCacheParaFloat(&meuCache, 88.5f);
  
  printf("--- DEPOIS DA MODIFICACAO ---\n");
  printf("Percentual de Uso: %.1f%%\n\n", meuCache.percentualUso);

  printf("Tamanho em bytes ocupado pela union: %lu bytes\n", sizeof(union CacheVal));

  return 0;
}
