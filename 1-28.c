/*
 공용체의 메모리를 어떻게 사용하는지 확인하기 위한 예제.
 last modified 2021-08-20
*/
#include <stdio.h>

union point {
	int x;
	int y;
};	// 변수들 중 가장 큰 자료형인 int형으로 4바이트의 메모리 공간이 할당됨.

int main(void) {
	union point p;
	p.x = 10;

	printf("p.x: %d, p.y: %d \n", p.x, p.y);
	// 4바이트 메모리 공간을 공유해서 사용하기 때문에 p.x값이 변경되면 p.y값도 변경됨!

	return 0;
}