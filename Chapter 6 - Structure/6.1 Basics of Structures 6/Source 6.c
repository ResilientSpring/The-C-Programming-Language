#include <stdio.h>

struct Point {

	int x;
	int y;

};


struct Rectangle {

	struct Point pt1;

	struct Point pt2;

};

struct Rectangle screen;

int main() {

	screen.pt2.x = 1;


}