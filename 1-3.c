/*
 구조체 변수의 초기화를 보여주는 예제.
 last modified 2021-08-17
*/
#include <stdio.h>

struct point {
	int x, y;
};

int main(void) {
	struct point p1 = { 10, 20 };	// 구조체 변수를 선언하는 '동시에' 초기화!
									// 구조체 변수의 선언과 초기화를 따로 하면 ERROR.
	printf("x: %d, y: %d \n", p1.x, p1.y);

	return 0;
}