/*
 멤버 변수로 다차원 포인터를 사용하는 경우의 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

struct point {
	int* x;
	int** y;
};

int main(void) {
	int num1 = 3;
	struct point p1;

	p1.x = &num1;	// 1차원 포인터에는 변수의 주소를 저장.
	p1.y = &p1.x;	// 2차원 포인터에는 1차원 포인터의 주소를 저장,

	printf("%d %d %d \n", num1, *p1.x, **p1.y);

	return 0;
}