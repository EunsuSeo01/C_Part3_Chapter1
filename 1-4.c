/*
 구조체 변수의 초기화를 보여주는 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

struct point {
	int x, y;
};

int main(void) {
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };
	struct point p3 = { 0, 0 };

	p3.x = p2.x - p1.x;
	p3.y = p2.y - p1.y;

	printf("p3.x: %d, p3.y: %d \n", p3.x, p3.y);

	return 0;
}