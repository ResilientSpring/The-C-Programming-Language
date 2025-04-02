#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// 函數用來取得使用者輸入的有效整數
int get_valid_integer() {
    int num;
    char ch;
    while (1) {
        printf("請輸入一個整數: ");
        if (scanf("%d", &num) == 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // 清除輸入緩衝區
            return num;
        }
        else {
            printf("輸入錯誤！請輸入有效的整數。\n");
            while ((ch = getchar()) != '\n' && ch != EOF); // 清除錯誤輸入
        }
    }
}

// 主函數
int main() {
    int n, i, num;
    int max = INT_MIN; // 設定初始最大值為最小可能的整數

    printf("請輸入數字的數量: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        num = get_valid_integer();
        if (num > max) {
            max = num;
        }
    }

    printf("最大值為: %d\n", max);
    return 0;
}


// Source: https://chatgpt.com/c/67ecffa3-a518-8008-bd4c-7152bf40e1f1