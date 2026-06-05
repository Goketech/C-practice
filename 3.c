#include <stdio.h>

long factorial(int n);

void myexplanation() {
    printf("Welcome to my program!\n");
    printf("First off, Thadee is a great teacher!\n");
    printf("Now let me explain recursion to you.\n");
    printf("Recursion is a programming technique where a function calls itself in order to solve a problem\n");
    printf("One of the most common examples of recursion is the calculation of factorials.\n");
    printf("But why do we need it, it helps achieves the same goal with lesser code, Is that not amazing\n");
    printf("However, it takes up some memory,, and recursion without a base case could run and crash the system\n");
    printf("Now, let's see some example\n");
}

int main () {
myexplanation();

    int number;
    printf("Please enter a positive integer to calculate its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("I thought I said a positive number.\n");
    } else {
        long result = factorial(number);
        printf("The factorial of %d is: %ld\n", number, result);
    }

    return 0;

}

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}