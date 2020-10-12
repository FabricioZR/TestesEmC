#include <stdio.h>
#include <math.h>
int main() {
  double A,B,C,d=0,r1=0,r2=0;
  scanf("%lf %lf %lf", &A,&B,&C);
  d = (B*B) - (4*A*C);
  if ((d <= 0) || (A == 0)){
    printf("Impossivel calcular\n");
  }
  else{
    r1 = (-B + sqrt(d)) / (2*A);
    r2 = (-B - sqrt(d)) / (2*A);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }
  return 0;
}