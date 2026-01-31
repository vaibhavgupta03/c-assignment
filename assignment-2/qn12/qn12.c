#include <stdio.h>
#include <math.h>

int main(){
  int a;
  printf("Enter a 3 digit number: \n");
  scanf("%d", &a);
  int h, t, o;
  h = a / 100;
  t = (a % 100) / 10;
  o = a % 10;
  if((pow(h,3)+pow(t,3)+ pow(o,3)) == a){
    printf("The number is an Armstrong number\n");
  } else {
    printf("The number is not an armstrong number\n");
  }
  return 0;
}