/*
a010. 因數分解
https://zerojudge.tw/ShowProblem?problemid=a010
*/

#include <stdio.h>

int is_prime(int num) {
    for (int i = 2; i < num; i++) {
        if (num%i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    scanf("%d", &num);
    int number = num;
    int is_first = 1;
    for (int i = 2; i <= number; i++) {
        if (num % i == 0) {
            if (!is_first) {
                is_first = 0;
                printf(" * ");
            }
            int count = 0;
            num/=i;
            while (num % i == 0) {
                count++;
                num/=i;
            }
            if (count != 0) {
                printf("%d^%d", i, count+1);
                is_first = 0;
            } else if (count == 0) {
                printf("%d", i);
                is_first = 0;
            }
        }
    }
    return 0;

}