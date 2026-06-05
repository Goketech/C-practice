#include <stdio.h>

int main () {
    int input;
    double firstNumber;
    double secondNumber;
    double result;

    while (1) {
    printf("Welcome to the smartest calculator ever!\n");
    printf("Please enter the operation you want to perform (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division ): \n");
    printf("If you wish to terminate the program, please enter 0.\n");
    
    scanf("%d", &input);

    if (input == 0) {
        printf("So sad to see you go. Hopefully we see again!\n");
        return 0;
    }

    if (input < 1 || input > 4) {
        printf("Ooops, I do not understand what you entered, Please try again");
        continue;
    }

    printf("  Enter the first number: ");
    scanf("%lf", &firstNumber);
    printf("  Enter the second number: ");
    scanf("%lf", &secondNumber);

    switch (input) {
        case 1:
            result = firstNumber + secondNumber;
            printf("The result of %.2lf + %.2lf is: %.2lf\n", firstNumber, secondNumber, result);
            break;

        case 2:
            result = firstNumber - secondNumber;
            printf("The result of %.2lf - %.2lf is: %.2lf\n", firstNumber, secondNumber, result);
            break;
            
        case 3:
            result = firstNumber * secondNumber;
            printf("The result of %.2lf * %.2lf is: %.2lf\n", firstNumber, secondNumber, result);
            break;

        case 4:
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
                printf("The result of %.2lf / %.2lf is: %.2lf\n", firstNumber, secondNumber, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("This code shouldn't be executed because I have validated inputs at the top, If you are seeing this, That would be weir, let me know\n");
            continue;    
    }

}
    
}