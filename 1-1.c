/*
 구조체 변수로 구조체 멤버 변수에 접근하는 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

// 구조체 정의.
struct group {
	int a;			// a,b : 구조체 멤버 변수.
	double b;
};

int main(void) {
	// 구조체 변수 g1 선언.
	struct group g1;

	// 구조체 변수로 구조체 멤버 변수에 접근!
	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값 : %lf \n", g1.b);

	return 0;
}