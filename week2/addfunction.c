#include <stdio.h>

int adder(int a, int b);

int main(void)
{
    int value1, value2;
    printf("This program adds two numbers\n");
    printf("Please enter your first number: ");
    scanf("%i", &value1);
    printf("Please enter your second number: ");
    scanf("%i", &value2);
    int result = adder(value1, value2);
    printf("Your total for the two numbers: %i\n", result);
    getchar();
}

int adder(int a, int b)
{
    return a + b;
}