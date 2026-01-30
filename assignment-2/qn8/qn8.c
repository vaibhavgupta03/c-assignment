#include <stdio.h>

int main(){
  int a;
  printf("Enter a 3-digit number:\n");
  scanf("%d", &a);
  int t, h, o;
  t = a / 100;
  h = (a % 100) / 10;
  o = a % 10;
  int reverse = 100 * o + 10 * h + t;
  printf("The reverse number is %d", reverse);
  return 0;
}