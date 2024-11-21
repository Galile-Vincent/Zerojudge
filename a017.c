/*
a017. 五則運算
https://zerojudge.tw/ShowProblem?problemid=a017

Step 1. * / all the number 
Step 2. + - all the number
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool in_range(int len, int i) {
    return (i - 2) >=0 && (i + 2) < len;
}

void priority_one(char arr[100]) {
    char arr_finished[100];
    int place = 0;
    for (int i = 0; i <  strlen(arr_finished); i++) {
        if (arr_finished[i] == '(') {
            
        }
        arr_finished[place] = 
    }
}

void product(char arr[100]) {
    char arr_finished[100];
    strcpy(arr_finished, arr);
    strcpy(arr, "");
    int place = 0;
    int len = strlen(arr_finished);
    for (int i = 0; i <  len; i++) {
        if (arr_finished[i] == "*" && in_range(len, i)) {
            if (arr_finished)
        }
    }
}

int main() {
    char arr[100];
    while (scanf("%s", arr) != EOF) {
        int ans = 0;
        for (int i = 0; i <  strlen(arr); i++) {
            if ()
        }
    }
    return 0;
}