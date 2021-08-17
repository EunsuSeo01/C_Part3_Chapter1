/*
 자기 참조 구조체를 사용하는 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

// 자기 참조 구조체.
typedef struct student {
	char name[20];
	int money;
	struct student* left_link;		// 자기 참조 구조체 포인터 변수 선언.
	struct student* right_link;		// 자기 참조 구조체 포인터 변수 선언.
} S; 

int main(void) {
	S stu1 = { "Kim", 90, NULL, NULL };
	S stu2 = { "Lee", 80, NULL, NULL };
	S stu3 = { "Goo", 60, NULL, NULL };

	stu1.left_link = &stu2;
	stu1.right_link = &stu3;

	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.left_link->name, stu1.left_link->money);
	printf("%s %d \n", stu1.right_link->name, stu1.right_link->money);

	return 0;
}