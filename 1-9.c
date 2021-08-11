/*
 typedef를 이용해 구조체를 재정의하는 예제.
 last modified 2021-08-12
*/
#include <stdio.h>

// 구조체에서 typedef를 사용하는 방법 1. 구조체 정의와 동시에 선언.
typedef struct score {
	double math;
	double english;
	double average;
} SCORE;

struct student {
	int no;
	SCORE s;		// struct score s;와 같음. 재정의한 이름 SCORE를 사용.
};
// 구조체에서 typedef를 사용하는 방법 2. 구조체 정의와 개별적으로 선언.
typedef struct student STUDENT;

int main(void) {
	STUDENT stu = { 202035340, { 90, 80, 0} };

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("학번 : %d \n", stu.no);
	printf("평균 점수 : %lf \n", stu.s.average);

	return 0;
}