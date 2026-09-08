#include  <stdio.h>

int main(){
  int qta_temp= 0,pac_febre=0;
  int qta_paciente;
  float soma=0, temp_maior=0, temp_menor=0;
  float temp,temp_media;

  printf("Pacientes:");
  scanf("%d",&qta_paciente);

  for (int i=1; i<=qta_paciente; i++){
    
    printf("Digite a temperatura em graus:");
    scanf("%f",&temp);
    
    if (temp>30 && temp<45){
      qta_temp++;
      soma+=temp;
      
      if(temp>=37.5){
        pac_febre++;
      } 
      
      if(i==1){
        temp_menor=temp;
        temp_maior=temp;
      }
      
      if(temp>temp_maior){
        temp_maior=temp;
      }
      if(temp<temp_menor)
        temp_menor=temp;
    }
    else{
      printf("Temperatura inválida\n");
      continue;
    }
  }
  if (qta_temp>0){
    
    temp_media=soma/qta_temp;
    printf("Média: %.1f \n",temp_media);
    printf("Maior: %.1f\n",temp_maior);
    printf("Menor: %.1f\n",temp_menor);
    printf("Pacientes com febre: %d\n",pac_febre);
    
    if(temp_media>=37.5){  
      printf("Alerta de febre generalizada");
    }
    
    else if(temp  _media<36){
      printf("Possível hipotermia");
    }
    else{
      printf("Temperaturas normais");
    }
  }
  else{
  
    printf("Nenhuma medição válida");
  }
}
