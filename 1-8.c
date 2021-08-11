/*
 중첩 구조체를 초기화하는 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

struct score {
	double math;
	double english;
	double total;
};

struct student {
	int no;
	struct score s;		// 중첩 구조체.
};

int main(void) {
	struct student stu = { 202035340, {90, 80, 0} };	// 중첩 구조체의 초기화.
	// struct student stu = { 202035340, 90, 80, 0 };	// 내부의 중괄호 생략해도 데이터는 '순서대로' 저장됨.

	stu.s.total = stu.s.math + stu.s.english;
	printf("학번 : %d \n", stu.no);
	printf("총점 : %lf \n", stu.s.total);

	return 0;
}