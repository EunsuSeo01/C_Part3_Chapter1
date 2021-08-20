/*
 구조체 변수의 크기과 공용체 변수의 크기를 비교하는 예제.
 last modified 2021-08-20
*/
#include <stdio.h>

union point {	// 공용체 정의. -> union 키워드 사용!
	int x;		// 멤버 변수 중 가장 큰 메모리 공간을 차지하는 자료형의 크기로
	int y;		// 메모리가 생성됨. 이 메모리를 다른 변수들과 함께 공유하여 사용.
};

struct student {	// 구조체 정의.
	int a;
	int b;
};

int main(void) {
	printf("공용체: %d, 구조체: %d \n", sizeof(union point), sizeof(struct student));

	return 0;
}