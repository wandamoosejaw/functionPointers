#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum;
    int (*sampleP)(int,int);
    sampleP= add; // the function name that will return us the pointer
    sum = sampleP(11,11);
    printf("Sum: %d", sum);

}
