/*
f605. 1. 購買力
https://zerojudge.tw/ShowProblem?problemid=f605
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<stdio.h>

int main() {
    int n;
    int dif;
    scanf("%d %d", &n, &dif);
    int count_meet_dif = 0;
    int total = 0; // The total of the avg money of the product that meet the dif
    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int avg = (a + b + c) / 3;
        if (a - b >= dif || b - a >= dif || a - c >= dif || c - a >= dif || b - c >= dif || c - b >= dif) {
            count_meet_dif++;
            total+= avg;
        }
    }

    printf("%d %d", count_meet_dif, total);
    return 0;
}