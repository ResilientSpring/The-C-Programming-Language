#include <stdio.h>

// 主程式負責可以持續接受輸入，檢查輸入為合法的整數值後，呼叫轉換程式的方法，並顯示結果，
// 如果輸入不是合法的整數，結束程式的執行。
int main() {

	int n;

	if (scanf("%d", &n) == 1)
		tenBaseTo2_8_16base(n);
	else
		printf("Error! Invalid integer input!");

}

char* tenBaseTo2_8_16base(int decimal) {



}

// 113年公務人員普通考試試題 程式設計概要 