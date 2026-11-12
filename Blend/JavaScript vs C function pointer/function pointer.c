#include <stdio.h>

void my_alert(void) {

	printf("Hello!\n");

}

int main() {

	void (*show_feature4)(void);

	my_alert();

	show_feature4 = my_alert;

	show_feature4();

	return 0;

}


// Reference: https://chatgpt.com/c/6af496f5-8c8c-83ee-8a62-8ae1613e1fa5
