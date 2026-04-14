/*Q-15) Write a C program to find the roots of the quadratic equation and display a message that roots 
are equal or distinct or real or complex.*/

#include <stdio.h>

int main() {
    float a, b, c, discriminant, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("Roots are real and distinct.\n");
    } else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
    } else {
        printf("Roots are complex.\n");
    }

    return 0;
}