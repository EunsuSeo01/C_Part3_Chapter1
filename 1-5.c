/*
 구조체 변수의 복사를 보여주는 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

struct point {
	int x, y;
};

int main(void) {
	struct point p1 = { 10, 20 };
	struct point p2 = { 0,0 };

	p2 = p1;	// 구조체 변수 p1을 p2에 복사! -> 같은 구조체 타입 struct point니까 가능.

	printf("p1.x: %d, p1.y: %d \n", p1.x, p1.y);
	printf("p2.x: %d, p2.y: %d \n", p2.x, p2.y);

	return 0;
}