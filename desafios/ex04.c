#include <stdio.h>

int main(){
  int opcao, quantidade, sobreMesa;
  float valor;

  printf("----MENU----\n");
  printf("1 - Hambúrguer ........ R$ 18,00 \n");
  printf("2 - X-Salada .......... R$ 22,00 \n");
  printf("3 - X-Bacon ........... R$ 25,00\n");
  printf("4 - Batata Frita ...... R$ 12,00\n");
  printf("5 - Refrigerante ...... R$ 7,00\n");

  printf("Digite uma opcao:\n");
  scanf("%d", &opcao);

  printf("Digite a quantidade:\n");
  scanf("%d", &quantidade);

  printf("Adicionar sobremesa(1=Sim / 0=Não):\n");
  scanf("%d", &sobreMesa);

  switch(opcao){
    case 1:
      if(sobreMesa == 1){
        valor = 18 * quantidade;
          if(valor + 8 > 100){
            printf("Produto: Hambúrguer\n");
            printf("Quantidade: %d\n", quantidade);
            printf("Valor dos produtos: %f\n", valor);
            printf("Valor da sobremesa: R$ 8,00\n");
            printf("Desconto: 10%\n");
            printf("Valor final: %f\n",(valor + 8) - (valor + 8) * 0.10);
            }

                else if(valor + 8 >= 50 && valor + 8 <= 100){
                    printf("Produto: Hambúrguer\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.05);
                }

                else{
                    printf("Produto: Hambúrguer\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor + 8);
                }
            }

            else{

                valor = 18 * quantidade;

                if(valor > 100){
                    printf("Produto: Hambúrguer\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n", valor - valor * 0.10);
                }

                else if(valor >= 50 && valor <= 100){
                    printf("Produto: Hambúrguer\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n", valor - valor * 0.05);
                }

                else{
                    printf("Produto: Hambúrguer\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor);
                }
            }

            break;


        case 2:

            if(sobreMesa == 1){

                valor = 22 * quantidade;

                if(valor + 8 > 100){
                    printf("Produto: X-Salada\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.10);
                }

                else if(valor + 8 >= 50 && valor + 8 <= 100){
                    printf("Produto: X-Salada\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.05);
                }

                else{
                    printf("Produto: X-Salada\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor + 8);
                }
            }

            else{

                valor = 22 * quantidade;

                if(valor > 100){
                    printf("Produto: X-Salada\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n", valor - valor * 0.10);
                }

                else if(valor >= 50 && valor <= 100){
                    printf("Produto: X-Salada\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n", valor - valor * 0.05);
                }

                else{
                    printf("Produto: X-Salada\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor);
                }
            }

            break;


        case 3:

            if(sobreMesa == 1){

                valor = 25 * quantidade;

                if(valor + 8 > 100){
                    printf("Produto: X-Bacon\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.10);
                }

                else if(valor + 8 >= 50 && valor + 8 <= 100){
                    printf("Produto: X-Bacon\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.05);
                }

                else{
                    printf("Produto: X-Bacon\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor + 8);
                }
            }

            else{

                valor = 25 * quantidade;

                if(valor > 100){
                    printf("Produto: X-Bacon\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n", valor - valor * 0.10);
                }

                else if(valor >= 50 && valor <= 100){
                    printf("Produto: X-Bacon\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n", valor - valor * 0.05);
                }

                else{
                    printf("Produto: X-Bacon\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor);
                }
            }

            break;


        case 4:

            if(sobreMesa == 1){

                valor = 12 * quantidade;

                if(valor + 8 > 100){
                    printf("Produto: Batata Frita\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.10);
                }bz

                else if(valor + 8 >= 50 && valor + 8 <= 100){
                    printf("Produto: Batata Frita\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.05);
                }

                else{
                    printf("Produto: Batata Frita\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor + 8);
                }
            }

            else{

                valor = 12 * quantidade;

                if(valor > 100){
                    printf("Produto: Batata Frita\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n", valor - valor * 0.10);
                }

                else if(valor >= 50 && valor <= 100){
                    printf("Produto: Batata Frita\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n", valor - valor * 0.05);
                }

                else{
                    printf("Produto: Batata Frita\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor);
                }
            }

            break;


        case 5:

            if(sobreMesa == 1){

                valor = 7 * quantidade;

                if(valor + 8 > 100){
                    printf("Produto: Refrigerante\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.10);
                }

                else if(valor + 8 >= 50 && valor + 8 <= 100){
                    printf("Produto: Refrigerante\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n",
                           (valor + 8) - (valor + 8) * 0.05);
                }

                else{
                    printf("Produto: Refrigerante\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 8,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor + 8);
                }
            }

            else{

                valor = 7 * quantidade;

                if(valor > 100){
                    printf("Produto: Refrigerante\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 10%\n");
                    printf("Valor final: %f\n", valor - valor * 0.10);
                }

                else if(valor >= 50 && valor <= 100){
                    printf("Produto: Refrigerante\n");
                    printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 5%\n");
                    printf("Valor final: %f\n", valor - valor * 0.05);
                }

              else{
               printf("Produto: Refrigerante\n");
             printf("Quantidade: %d\n", quantidade);
                    printf("Valor dos produtos: %f\n", valor);
                    printf("Valor da sobremesa: R$ 0,00\n");
                    printf("Desconto: 0%\n");
                    printf("Valor final: %f\n", valor);
              }
          }

          break;

      default:
        printf("Produto inválido\n");
  }

  
}
