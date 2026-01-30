#include <stdio.h>

int main(){
  int a = 1;
  int b = 12;
  int c = 123;
  int d = 1234;
  int e = 12345;

  printf("%05d\n", a);
  printf("%05d\n", b);
  printf("%05d\n", c);
  printf("%05d\n", d);
  printf("%05d\n", e);

  char a1 = 'a';
  char a2 = 'ab';
  char a3 = 'abc';
  char a4 = 'abcd';
  char a5 = 'abcde';

  printf("% 5f\n", a1);
}