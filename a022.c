/*
a022. 迴文
https://zerojudge.tw/ShowProblem?problemid=a022
*/

#include<stdio.h>
#include<string.h>

int main() {
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    int middle = 0;
    if (len % 2 == 0) {
        middle = len / 2;
    } else {
        middle = (len - 1) / 2;
    }
    for (int i = 0; i < middle; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}