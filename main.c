#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, sum;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);


    // Prompt the user for input
    printf("RESTA: Enter the first number: ");
    scanf("%d", &num1);

    printf("RESTA: Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 - num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);


    // Display the result

    return 0;
}

