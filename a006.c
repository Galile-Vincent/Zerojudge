/*
a006. 一元二次方程式
https://zerojudge.tw/ShowProblem?problemid=a006
*/
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int ans = 0;
    scanf("%d %d %d", &a, &b, &c);

    int dertermine = (b * b - 4 * a * c);

    if (dertermine > 0) {
        int x1 = (-b + sqrt(dertermine)) / (2 * a);
        int x2 = (-b - sqrt(dertermine)) / (2 * a);
        printf("Two different roots x1=%d , x2=%d\n", x1, x2);
    } else if (dertermine == 0) {
        printf("Two same roots x=%d\n", -b / (2 * a));
    } else {
        printf("No real root\n");
    }
    return 0;
}