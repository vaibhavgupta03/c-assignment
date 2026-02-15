
/* Q1) Write a program that calculates the Body Mass Index (BMI) based on weight and height inputs. Classify the BMI according to the World Health Organization's categories: Underweight: BMI < 18.5 Normal weight: BMI >= 18.5 and < 25 Overweight: BMI >= 25 and < 30 Obesity: BMI >= 30 */

#include <stdio.h>

int main() {
    float h, w, bmi;

    printf("Enter your height in centimeter: ");
    scanf("%f", &h);
    printf("Enter your weight in kg: ");
    scanf("%f", &w);

    bmi = w / (h * h / 10000);

    printf("BMI: %.1f\n", bmi);
    
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Overweight\n");
    } else {
        printf("Obesity\n");
    }

    return 0;
}