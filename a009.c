/*
a009. 解碼器
https://zerojudge.tw/ShowProblem?problemid=a009
*/

#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];
    scanf("%s", c);

    int len = strlen(c);

    for (int i = 0; i < len; i++) {
        printf("%c", c[i] - 7);
    }
    return 0;
}