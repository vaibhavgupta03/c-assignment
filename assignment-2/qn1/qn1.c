#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
  float radius;
  printf("Enter the value of the radius :\n");
  scanf("%f", &radius);
  float diameter = 2 * radius;
  float circumference = 2 * PI * radius;
  float area = PI * radius * radius;
  printf("The value of radius is: %f\nThe value of diameter is: %f\nThe value of circumference is: %f \nThe value of area is: %f\n",radius,diameter,circumference,area);
  printf("------------------------------------\n");
  printf("The values of area and circumference using the header file:\n");
  printf("------------------------------------\n");
  diameter = 2 * radius;
  circumference = M_PI * 2 * radius;
  area = M_PI * radius * radius;
  printf("The value of radius is: %f\nThe value of diameter is: %f\nThe value of circumference is: %f\nThe value of area is: %f\n",radius,diameter,circumference,area);
  return 0;
}