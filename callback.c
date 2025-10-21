#include <stdio.h>

// A function that takes another function as a parameter (callback)
void performOperation(int x, int y, int (*callback)(int, int)) {
    printf("Result: %d\n", callback(x, y));
}

// Some example functions
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int a = 5, b = 3;

    // Calling performOperation with different callbacks
    performOperation(a, b, add);        // Calls add() through callback
    performOperation(a, b, multiply);   // Calls multiply() through callback

    return 0;
}
