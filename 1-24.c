/*
 함수의 매개변수로 구조체 포인터 변수를 사용하는 예제. (주소에 의한 호출)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

void function(struct point* call);

int main(void) {
	struct point p = { 10, 20 };
	function(&p);	// 구조체 변수의 주소를 함수의 인자로 보낸다.

	return 0;
}

// 함수의 매개변수가 구조체 포인터 변수이다!
void function(struct point* call) {
	printf("%d %d \n", call->x, call->y);
	printf("%d %d \n", (*call).x, (*call).y);	// * . == ->
}