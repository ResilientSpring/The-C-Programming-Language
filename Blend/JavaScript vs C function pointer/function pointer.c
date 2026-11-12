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