/*
a024. 最大公因數(GCD)
https://zerojudge.tw/ShowProblem?problemid=a024
*/

#include<stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    if (num1 == 0 || num2 == 0) {
        printf("0");
        return 0;
    }
    if (num1 == num2) {
        printf("%d", num1);
        return 0;
    }
    int min = num2;
    if (num1 < num2) {
        min = num1;
    }
    int gcd = 0;
    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }
    printf("%d", gcd);
    return 0;
}