struct point {
	int x;
	int y;
};

struct rect {

	struct point pt1;

	struct point pt2;

};

// makepoint: make a point from x and y components
struct point makepoint(int x, int y)
{

	struct point temp;

	temp.x = x;
	temp.y = y;

	return temp;

}

enum MyEnum
{
	XMAX = 1024,
	YMAX = 768
};

struct rect screen;
struct point middle;

int main() {

	screen.pt1 = makepoint(0, 0);
	screen.pt2 = makepoint(XMAX, YMAX);
	middle = makepoint( (screen.pt1.x + screen.pt2.y)/ 2, (screen.pt1.y + screen.pt2.y) / 2 );




}


// addpoint: add two points
struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;

	p1.y += p2.y;

	return p1;
}