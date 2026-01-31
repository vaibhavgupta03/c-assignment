#include <stdio.h>

int main(){
  float celsius;
  printf("Enter the temperature in celsius :\n");
  scanf("%f", &celsius);
  float fahrenheit;
  fahrenheit = ((float) 9 / 5) * celsius + 32;
  printf("Your input temperature in celsius scale is %f\nYour temperature in fahrenheit scale is %.3f", celsius, fahrenheit);
  return 0;
}