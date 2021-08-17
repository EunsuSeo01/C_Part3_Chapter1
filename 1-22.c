/*
 외부 참조 구조체를 사용하는 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct student {
	char name[20];
	struct point* link;		// 외부 참조 구조체 포인터 변수 link 선언.
};

int main(void) {
	// 각 구조체 변수들을 선언 & 초기화.
	struct student stu1 = { "Kim", NULL };
	struct student stu2 = { "Lee", NULL };
	struct point p1 = { 30, 40 };
	struct point p2 = { 60, 80 };

	stu1.link = &p1;
	stu2.link = &p2;	// 다른 구조체를 참조할 수 있게 됨.

	printf("%s %d %d \n", stu1.name, stu1.link->x, stu1.link->y);
	printf("%s %d %d \n", stu2.name, stu2.link->x, stu2.link->y);
	printf("%d %d \n", sizeof(struct point), sizeof(struct student));	// 궁금해서 넣어본 코드.

	return 0;
}