#include <stdio.h>
#include <stdlib.h>

void performCalculation(int x, int y);
void handleUserInput();
void displayResult(int result);
int main()
{
    printf("Welcome to the Git Conflict Simulation!\n");
    handleUserInput();
    return 0;
}

void performCalculation(int x, int y)
{
    printf("Calculating result for %d and %d...\n", x, y);
    int result = x + y;
    displayResult(result);
}
void handleUserInput()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    performCalculation(a, b);
}
void displayResult(int result)
{
    printf("**********\n");
    printf("The computed result is: %d\n", result);
    printf("**********\n");
}
