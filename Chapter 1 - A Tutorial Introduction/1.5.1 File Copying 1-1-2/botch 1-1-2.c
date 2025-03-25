#include <stdio.h>

int main() {

	char c;

	//  getchar() gets a character from a text stream (aka buffer, an array of characters, etc).
	c = getchar(); // [Note1]

	while (c != EOF)
		putchar(c);


}

// Note:
// 
// 1. 輸入的字元先被直接return到螢幕上, b/c 系統為了要讓我們知道究竟輸入了哪些字,  同時這些輸入的字元
//    會被存在 buffer 中，等到使用者打了 Enter 才把 buffer 裡的字元送到程式. [3]:4 [Note2, 4]
//
// 2. A text stream is a sequence of characters followed by a newline character '\n'. [1] [Note3]
//
// 3. The library might convert carriage return '\r' to linefeed '\n' on input. [1]:164
// 
// 4. The stream has aliases "standard input", "standard stream", "internal buffer". [1]:164 [2]:403

/* References:
*
* 1. <The C Programming Language> Page 30
* 2. <C++ A Beginner's Guide> Page 430
* 3. https://web.archive.org/web/20250324112746/https://ocw.nthu.edu.tw/ocw/upload/134/news/%E9%99%B3%E7%85%A5%E5%AE%97%E6%95%99%E5%8F%97%E7%A8%8B%E5%BC%8F%E8%A8%AD%E8%A8%881-%E5%AD%97%E5%85%83%E8%BC%B8%E5%85%A5%E8%88%87%E8%BC%B8%E5%87%BA.pdf

*/