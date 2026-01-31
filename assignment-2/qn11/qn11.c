#include <stdio.h>

int main(){
  int a, b;
  printf("Enter the two number a and b: \n");
  scanf("%d %d", &a, &b);
  printf("The original numbers before swapping is a = %d & b = %d\n", a, b);
  b = b + a;
  a = b - a;
  b = b - a;
  printf("The numbers after performing swapping is a = %d & b = %d\n", a, b);
  return 0;
}