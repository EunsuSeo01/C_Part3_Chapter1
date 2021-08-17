/*
 멤버 변수로 1차원 포인터를 사용하는 경우의 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

struct point {
	int* x;		// 구조체의 멤버 변수로 1차원 포인터를 선언.
	int* y;		// x,y는 int형 1차원 포인터 -> int형 변수의 주소를 저장할 수 있음.
};
typedef struct point P;		// typedef 써서 구조체를 재정의.

int main() {
	int num1 = 4;
	int num2 = 5;
	P p1;

	p1.x = &num1;
	p1.y = &num2;

	printf("%d %d \n", num1, num2);
	printf("%d %d \n", *p1.x, *p1.y);

	return 0;
}