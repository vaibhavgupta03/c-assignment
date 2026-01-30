#include <stdio.h>

int main(){
  int s;
  printf("Enter the number of seconds :\n");
  scanf("%d", &s);
  int hour = s / 3600;
  int minute = (s % 3600) / 60;
  int seconds = s % 60;
  printf("%d seconds is equivalent to %d hours, %d minutes and %d seconds.\n", s, hour, minute, seconds);
  return 0;
}