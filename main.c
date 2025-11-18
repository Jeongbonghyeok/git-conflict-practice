#include<stdio.h>
#include <stdlib.h>
void logResult(int x, int y, int result);


void performCalculation(int x, int y);
void handleUserInput();
void displayResult(int result);
int main() {
    printf("Welcome to the Git Conflict Simulation!\n");
    handleUserInput();
    return 0;
}

void performCalculation(int x, int y) {
    printf("Calculating result for %d and %d...\n", x, y);
    int result = x + y;
    displayResult(result);
    logResult(x,y,result); //result의 로깅함 (결과를 파일에 기록)- 4번째 기능 추가. 
}
void handleUserInput() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    performCalculation(a, b);
}
void displayResult(int result) {
    printf("The result is: %d\n", result);
}

void logResult(int x, int y, int result) {
    FILE *fp = fopen("calc_log.txt", "a");   // 결과 누적 기록
    if (fp == NULL) {
        printf("Error: Could not open log file.\n");
        return;
    }

    fprintf(fp, "%d + %d = %d\n", x, y, result);

    fclose(fp);
}
