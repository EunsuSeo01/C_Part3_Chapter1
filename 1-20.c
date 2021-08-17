/*
 자기 참조 구조체를 사용하는 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

// 구조체 내에서 자기 자신을 참조하는 자기 참조 구조체.
struct student {
	char name[20];
	int money;
	struct student* link;		// 자기 참조 구조체 포인터 변수 link를 선언.
};

int main(void) {
	struct student stu1 = { "Kim", 90, NULL };
	struct student stu2 = { "Lee", 80, NULL };
	struct student stu3 = { "Goo", 60, NULL };

	stu1.link = &stu2;
	stu2.link = &stu3;		// 구조체 변수 stu1, stu2, stu3은
							// 포인터인 자기 참조 구조체 변수 link를 통해 서로 연결되어 있음.

	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.link->name, stu1.link->money);
	printf("%s %d \n", stu1.link->link->name, stu1.link->link->money);
	printf("%s %d \n", stu2.link->name, stu2.link->money);

	return 0;
}