/*
 구조체 변수들 간의 덧셈 연산을 하는 예제. -> 덧셈, 뺄셈, 곱셈, 나눗셈과 같은 연산은 불가능!
 last modified 2021-08-12
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point p1 = { 10, 20 };
	struct point p2 = { 0, 0 };
	struct point p3 = { 0, 0 };

	// p3 = p2 + p1;	에러 발생! 구조체 변수는 '사용자 정의 자료형'이라서 사칙연산은 불가.
	// p3 = p2 - p1;	오로지 '대입 연산'만 가능함.

	return 0;
}