/*
 scanf() 함수를 이용하여 구조체에 데이터를 저장하는 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

// 구조체 정의.
struct group {
	int a;		// 구조체 멤버 변수 선언.
	double b;
};

int main(void) {
	struct group g1;	// 구조체 변수 선언. 따로 선언하는 방법 이용.

	scanf("%d %lf", &g1.a, &g1.b);		// 데이터 입력 받아 저장.

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값 : %lf \n", g1.b);

	return 0;
}