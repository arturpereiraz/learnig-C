#include <stdio.h>

enum StatusJob {QUEUED, PROCESSING, COMPLETED, FAILED};

void executarJob(enum StatusJob *status){
  *status = PROCESSING;
  printf("[JOB] Status alterado para: PROCESSING (Em andamento...)\n");
    
  *status = COMPLETED;
  printf("[JOB] Status alterado para: COMPLETED (Finalizado com sucesso)\n");
}

int main (){
  enum StatusJob jobStatus = QUEUED;
  printf("--- GERENCIAMENTO DE TAREFAS ---\n");
  
  if (jobStatus == QUEUED){
    printf("Status Inicial = QUEUED\n");
  }
  executarJob(&jobStatus);
  
  printf("--- CONFIRMAÇÃO ---\n");
  if (jobStatus == COMPLETED) {
        printf("Sucesso: O job foi concluido e finalizado!\n");
    }
    return 0;
}
