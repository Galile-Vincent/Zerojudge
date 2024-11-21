/*
a020. 身分證檢驗
https://zerojudge.tw/ShowProblem?problemid=a020

 A=10 台北市     J=18 新竹縣     S=26 高雄縣
 B=11 台中市     K=19 苗栗縣     T=27 屏東縣
 C=12 基隆市     L=20 台中縣     U=28 花蓮縣
 D=13 台南市     M=21 南投縣     V=29 台東縣
 E=14 高雄市     N=22 彰化縣     *W=32 金門縣
 F=15 台北縣     *O=35 新竹市    X=30 澎湖縣
 G=16 宜蘭縣     P=23 雲林縣     Y=31 陽明山
 H=17 桃園縣     Q=24 嘉義縣     Z=33 連江縣
 *I=34 嘉義市     R=25 台南縣

*/

#include<stdio.h>

int get_num_from_char(char start) {
    int num = 0;
    if (start == 'I') {
        num = 34;
    } else if (start == 'O') {
        num = 35;
    } else if (start == 'W') {
        num = 32;
    } else if (start == 'X') {
        num = 30;
    } else if (start == 'Y') {
        num = 31;
    } else if (start == 'Z') {
        num = 33;
    } else if (start < 'I') {
        num = (start - 'A') + 10;
    } else if (start <= 'N' && start >= 'J') {
        num = (start - 'A') + 9;
    } else if (start <= 'V' && start >= 'P') {
        num = (start - 'A') + 8;
    }
    num = (num % 10) * 9 + (num / 10);
    return num;
}

int main () {
    char arr[100];
    scanf("%10s", arr);
    char start = arr[0];
    int judge_num = get_num_from_char(start);
    for (int i = 1; i < 9; i++) {
        int num = arr[9 - i] - '0';
        judge_num += (num * i);
    }
    judge_num += arr[9] - '0';
    if (judge_num % 10 == 0) {
        printf("real");
    } else {
        printf("fake");
    }
    return 0;
}