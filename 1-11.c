/*
 구조체 변수를 배열로 선언하는 예제.
 last modified 2021-08-17
*/
#include <stdio.h>

typedef struct student {
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
} STUDENT;

int main(void) {
	int i = 0;
	// 구조체 변수로 배열을 선언하고 동시에 초기화.
	STUDENT stu[3] = {
		{ "20101323", "Park", 80, 80, 0 },
		{ "20101324", "Kim", 95, 85, 0 },
		{ "20101325", "Lee", 100, 90, 0 }
	};

	// 반복문 사용.
	// 구조체 배열과 . 연산자로 구조체 멤버 변수들에 접근함.
	for (; i < 3; i++) {
		stu[i].total = stu[i].math + stu[i].english;
		printf("학번: %s, 이름: %s \n", stu[i].no, stu[i].name);
		printf("총점: %lf \n", stu[i].total);
		printf("\n");
	}

	return 0;
}