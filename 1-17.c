/*
 구조체 변수의 시작 주소와 구조체의 첫 번째 멤버 변수의 주소가 같음을 나타내는 예제 코드.
 last modified 2021-08-18
*/
#include <stdio.h>

// 구조체 선언.
struct point {
	int x;		// 구조체의 첫 번째 멤버 변수.
	int y;
};

int main(void) {
	struct point p1 = { 20, 30 };	// 선언과 동시에 초기화.
	printf("구조체 변수 p1의 주소 : %x \n", &p1);
	printf("첫 번째 멤버 변수 p1.x의 주소 : %x \n", &p1.x);

	return 0;
}