#include <stdio.h>
typedef int (*MiddlewareHandler)(int requestId);

int autenticar(int requestId) {
    printf("[MIDDLEWARE 1] Autenticando token do ID %d... [OK]\n", requestId);
    return 1;
}
int logar(int requestId) {
    printf("[MIDDLEWARE 2] Gravando log do ID %d no sistema... [OK]\n", requestId);
    return 1;
}

int main() {
    int reqId = 4592;
    MiddlewareHandler pipeline[2] = {autenticar, logar};
    
    printf("=== INICIANDO PIPELINE DE MIDDLEWARES ===\n");
    printf("Processando Requisicao ID: %d\n\n", reqId);
    
    int sucessoGeral = 1;
    for (int i = 0; i < 2; i++) {
        int resultado = pipeline[i](reqId); 
        if (resultado != 1) {
            sucessoGeral = 0;
            break;
        }
    }
    printf("\n=== RESULTADO DO PROCESSAMENTO ===\n");
    if (sucessoGeral) {
        printf("Cadeia concluida com SUCESSO para o ID %d!\n", reqId);
    } else {
        printf("FALHA no processamento da requisicao.\n");
    }

    return 0;
}
