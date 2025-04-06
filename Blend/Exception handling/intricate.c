#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 函數用來取得使用者輸入的有效整數
int get_valid_integer() {
    int num;
    char ch;
    while (1) {
        printf("請輸入一個整數 (輸入 q 退出): ");
        if (scanf("%d", &num) == 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // 清除輸入緩衝區
            return num;
        }
        else {
            while ((ch = getchar()) != '\n' && ch != EOF); // 清除錯誤輸入
            return -2147483648; // 以特殊值表示退出
        }
    }
}

// 主函數
int main() {
    int num;
    int max = -2147483648; // 設定初始最大值為最小可能的整數

    while (1) {
        num = get_valid_integer();
        if (num == -2147483648) break; // 若輸入錯誤則退出
        if (num > max) {
            max = num;
        }
    }

    if (max != -2147483648) {
        printf("最大值為: %d\n", max);
    }
    else {
        printf("未輸入有效數字。\n");
    }
    return 0;
}




// Source: https://chatgpt.com/c/67ecffa3-a518-8008-bd4c-7152bf40e1f1