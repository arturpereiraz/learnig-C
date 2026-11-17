#include <stdio.h>
#include <math.h>

int main(){
  double x1,x2,y1,y2;
  
  printf("Digite o X1:");
  scanf("%lf",&x1);
  printf("Digite o Y1:");
  scanf("%lf",&y1);
  printf("Digite o X2:");
  scanf("%lf",&x2);
  printf("Digite o Y2:");
  scanf("%lf",&y2);

  double deltax=x1-x2;
  double deltay=y1-y2;
  
  double resul=pow(deltax,2)+pow(deltay,2);
  
  double d=sqrt(resul);
  
  printf(".2%f",d);
  

}
