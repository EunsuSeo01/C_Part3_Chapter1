/*
 중첩 구조체 선언 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

// 구조체 정의.
struct score {
	double math, english, total;
};

// 구조체 정의.
struct student {
	int no;
	struct score s;		// 구조체 변수 s를 선언, s를 구조체 student의 멤버 변수로 정의.
};

int main(void) {
	struct student stu;

	stu.no = 20101323;
	stu.s.math = 90;		// . 연산자를 2개 사용하여 중첩 구조체에 접근 가능.
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("학번 : %d \n", stu.no);
	printf("총점 : %lf \n", stu.s.total);

	return 0;
}

