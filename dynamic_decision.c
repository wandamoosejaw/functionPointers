#include <stdio.h>

// Define the functions we want to point to
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a, b, choice;

    // Ask user for input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Ask user which operation to perform
    printf("Choose operation:\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Declare a function pointer that matches the functions' signatures
    int (*operation)(int, int);

    // Assign the pointer based on user choice
    if (choice == 1)
        operation = add;        // Point to add()
    else if (choice == 2)
        operation = subtract;   // Point to subtract()
    else if (choice == 3)
        operation = multiply;   // Point to multiply()
    else {
        printf("Invalid choice.\n");
        return 1; // Exit program if input is invalid
    }

    // Call the chosen function through the pointer
    printf("Result = %d\n", operation(a, b));

    return 0;
}
