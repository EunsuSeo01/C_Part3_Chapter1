/*
 함수의 반환형이 구조체 포인터인 경우의 예제. (구조체의 주소를 반환)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

// 반환형 : 구조체 포인터, 매개변수 : X.
struct point* function(void);

int main(void) {
	struct point* p;	// 구조체 포인터 변수 p.
	p = function();		// p의 자료형 == 함수의 반환형.

	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (*p).x, (*p).y);		// 반환받은 call이 static 변수라서 오류 없이 값이 잘 나옴.

	return 0;
}

struct point* function() {
	static struct point call = { 10, 20 };		// static을 안 붙이면 call은 지역변수.
	// 지역변수는 함수가 종료되면 사라져서 p로 call에 '간접 접근이 불가능'해짐.

	return &call;
}