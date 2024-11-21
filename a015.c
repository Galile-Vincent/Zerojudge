/*
a015. 矩陣的翻轉
https://zerojudge.tw/ShowProblem?problemid=a015

* 測資檔會包含多組矩陣資料 means that it might repeat
the test until EOF
*/

#include <stdio.h>

int main() {
    int x, y;
    int first = 1;
    
    while (scanf("%d %d", &x, &y) != EOF) {
        int arr[x][y];
        int ans[y][x];
        
        // Read the matrix
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        // Transpose the matrix
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                ans[j][i] = arr[i][j];
            }
        }
        if (!first) {
            printf("\n");
        }
        first = 0;

        // Print the transposed matrix
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                printf("%d", ans[i][j]);
                if (j != x - 1) {
                    printf(" ");
                }
            }
            if (i != y - 1) {
                printf("\n");
            }
        }
    }
    
    return 0;
}