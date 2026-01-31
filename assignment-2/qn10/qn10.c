#include <stdio.h>
#include <math.h>

int main(){
  float x;
  float y;
  printf("Give the x and y coordinate of a point : \n");
  scanf("%f %f", &x, &y);
  float dist;
  dist = sqrt(pow(x, 2) + pow(y, 2));
  printf("The distance of that point from the origin is %f", dist);
  return 0;
}