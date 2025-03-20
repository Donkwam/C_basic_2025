#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0):x{ ax }, y(ay) {
		printf("constructor call!!\n");
	}
	Point(const Point& other) {
		x = other.x;
		y = other.y;
		printf("copy constructor call!!\n");
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
	const Point& add(const Point& other) {
		printf("add() !~\n");
		return Point(x + other.x, y + other.y);
	}
	
};

int main()
{
	Point obj(10, 20);
	//obj.showPoint();
	Point obj2(30, 40);
	//obj2.showPoint();
	Point obj3;
	obj3 = obj.add(obj2);
	obj3.showPoint();
	
	return 0;
}