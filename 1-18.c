/*
 구조체 변수로 1차원 포인터 변수를 사용하는 경우의 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

struct student {
	char no[10];
	char name[20];
	double total;
};

int main(void) {
	struct student stu = { "20101323", "Park", 160 };	// 구조체 변수 선언 & 초기화.
	struct student* p = NULL;	// 1차원 구조체 포인터 변수 p를 선언.

	p = &stu;	// struct student형 포인터에는 struct student형 변수의 주소만 저장 가능!!
	// == 이제 p를 통해 다른 구조체 변수 stu에 '간접 접근이 가능'해짐.

	printf("%s %s %lf \n", stu.no, stu.name, stu.total);
	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);		// . 연산자의 우선 순위가 * 연산자의 우선순위보다
																// 높아서 *p를 먼저 처리하기 위해 괄호를 붙인 것.
	printf("%s %s %lf \n", p->no, p->name, p->total);			// -> 연산자는 구조체 포인터 변수에서만 사용 가능.
																// 좌측에 포인터가 와야 함. 포인터로만 사용 가능.

	return 0;
}