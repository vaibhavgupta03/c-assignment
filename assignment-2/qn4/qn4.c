#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
  char a;
  printf("Enter the character :\n");
  scanf("%c", &a);
  bool lower = islower(a);
  bool upper = isupper(a);

  char b;
  b = a + (lower * -32) + (upper * 32);
  printf("The original input character from the user is: %c\n", a);
  printf("The converted character is : %c\n", b);
  return 0;
}