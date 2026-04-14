/*
Q-14) Write a C program that does the following: 
 
1) Displays a menu with different modes of transport: 
 
  1. Bus       - ₹5 per km 
       2. Car       - ₹10 per km 
       3. Train     - ₹3 per km 
       4. Flight    - ₹50 per km 
2) Prompts the user to enter: 
 
○ Choice of transport (1–4) 
○ Distance to travel in kilometers 
3) Uses a switch statement to calculate the total cost based on the selected transport and 
distance. 
4) Prints the selected mode of transport, distance, and total price. */

#include <stdio.h>

int main() {
    int choice;
    float distance, cost;

    printf("Select mode of transport:\n");
    printf("1. Bus       - ₹5 per km\n");
    printf("2. Car       - ₹10 per km\n");
    printf("3. Train     - ₹3 per km\n");
    printf("4. Flight    - ₹50 per km\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter distance to travel in kilometers: ");
    scanf("%f", &distance);

    switch (choice) {
        case 1:
            cost = distance * 5;
            printf("Selected mode of transport: Bus\n");
            break;
        case 2:
            cost = distance * 10;
            printf("Selected mode of transport: Car\n");
            break;
        case 3:
            cost = distance * 3;
            printf("Selected mode of transport: Train\n");
            break;
        case 4:
            cost = distance * 50;
            printf("Selected mode of transport: Flight\n");
            break;
        default:
            printf("Invalid choice!\n");
            return 1; // Exit with error code
    }

    printf("Distance: %.2f km\n", distance);
    printf("Total price: ₹%.2f\n", cost);

    return 0; // Exit with success code
}