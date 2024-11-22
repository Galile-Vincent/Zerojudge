/*
c290. APCS 2017-0304-1秘密差
https://zerojudge.tw/ShowProblem?problemid=c290
*/

#include<stdio.h>
#include<string.h>

int main() {
    char arr[1000];
    scanf("%s", arr);
    int len = strlen(arr);
    int odd = 0;
    int even = 0;
    for (int i = 0; i < len; i++) {
        int num = arr[i] - '0';
        if (i % 2 == 0) { // Even
            even+=num;
        } else { // Odd
            odd+=num;
        }
    }
    int ans = even - odd;
    if (ans < 0) {
        ans*=-1;
    }
    printf("%d", ans);
    return 0;
}