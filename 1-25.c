/*
 함수의 반환형이 구조체인 경우의 예제. (구조체의 값을 반환)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

// 반환형 : struct point, 매개변수: X.
struct point function(void);

int main(void) {
	struct point p;
	p = function();		// 함수 호출. -> 반환형이 struct point라서
						// 반환값을 받는 변수도 struct point형이어야 함.
	printf("%d %d \n", p.x, p.y);	// 구조체 p는 call의 멤버 변수까지도 다 복사된 것임.

	return 0;
}

struct point function() {
	struct point call = { 10, 20 };		// 구조체 만들고, (주소가 아닌 값이 복사되는 거라서 static으로 선언 안해도 됨.)
	return call;	// 반환.
}