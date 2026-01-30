#include <stdio.h>
#include <math.h>

int main(){
  double A;
  float P;
  float t;
  printf("Enter the principal amount: \n");
  scanf("%f", &P);
  printf("Enter the time: \n");
  scanf("%f", &t);
  A = P * pow(1 + (9.0 / 500),5*t);
  printf("The value of amount is : %lf", A);
  return 0;
}