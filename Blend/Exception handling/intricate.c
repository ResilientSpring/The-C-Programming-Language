#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ƥΨӨ��o�ϥΪ̿�J�����ľ��
int get_valid_integer() {
    int num;
    char ch;
    while (1) {
        printf("�п�J�@�Ӿ�� (��J q �h�X): ");
        if (scanf("%d", &num) == 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // �M����J�w�İ�
            return num;
        }
        else {
            while ((ch = getchar()) != '\n' && ch != EOF); // �M�����~��J
            return -2147483648; // �H�S��Ȫ�ܰh�X
        }
    }
}

// �D���
int main() {
    int num;
    int max = -2147483648; // �]�w��l�̤j�Ȭ��̤p�i�઺���

    while (1) {
        num = get_valid_integer();
        if (num == -2147483648) break; // �Y��J���~�h�h�X
        if (num > max) {
            max = num;
        }
    }

    if (max != -2147483648) {
        printf("�̤j�Ȭ�: %d\n", max);
    }
    else {
        printf("����J���ļƦr�C\n");
    }
    return 0;
}




// Source: https://chatgpt.com/c/67ecffa3-a518-8008-bd4c-7152bf40e1f1