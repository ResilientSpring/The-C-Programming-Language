#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

// ��ƥΨӨ��o�ϥΪ̿�J�����ľ��
int get_valid_integer() {
    int num;
    char ch;
    while (1) {
        printf("�п�J�@�Ӿ��: ");
        if (scanf("%d", &num) == 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // �M����J�w�İ�
            return num;
        }
        else {
            printf("��J���~�I�п�J���Ī���ơC\n");
            while ((ch = getchar()) != '\n' && ch != EOF); // �M�����~��J
        }
    }
}

// �D���
int main() {
    int n, i, num;
    int max = INT_MIN; // �]�w��l�̤j�Ȭ��̤p�i�઺���

    printf("�п�J�Ʀr���ƶq: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        num = get_valid_integer();
        if (num > max) {
            max = num;
        }
    }

    printf("�̤j�Ȭ�: %d\n", max);
    return 0;
}


// Source: https://chatgpt.com/c/67ecffa3-a518-8008-bd4c-7152bf40e1f1