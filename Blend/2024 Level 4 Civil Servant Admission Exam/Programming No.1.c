#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tenBaseTo2_8_16base(int decimal);

// �D�{���t�d�i�H���򱵨���J�A�ˬd��J���X�k����ƭȫ�A�I�s�ഫ�{������k�A����ܵ��G�A
// �p�G��J���O�X�k����ơA�����{��������C
int main() {

	int n;

	if (scanf("%d", &n) == 1)
		tenBaseTo2_8_16base(n);
	else
		printf("Error! Invalid integer input!");

	for (; scanf("%d", &n) == 1;) {



	}

}

void tenBaseTo2_8_16base(int decimal) {

	for (int i = 128; i > 0; i >> 1) {

		if (decimal & i)
			printf("1");
		else
			printf("0");

	}

}

// 113�~���ȤH�����q�Ҹո��D �{���]�p���n 