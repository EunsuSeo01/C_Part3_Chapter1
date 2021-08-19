/*
 함수의 매개변수로 구조체 변수를 사용하는 예제. (값에 의한 호출)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void function(struct point call);

int main(void) {
	struct point p = { 10, 20 };
	function(p);	// 구조체 변수 p를 통해 함수를 호출.

	return 0;
}

// 함수의 매개변수가 구조체 변수.
void function(struct point call) {	// call에 p가 복사됨.
	printf("%d %d \n", call.x, call.y);
}