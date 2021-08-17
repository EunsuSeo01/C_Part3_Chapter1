/*
 구조체의 멤버 변수로 배열을 사용할 때 주의할 점을 보여주는 에러 코드.
 last modified 2021-08-18
*/
#include <stdio.h>

struct student {
	char no[10];
	char name[20];		// 멤버 변수로 배열을 선언.
};

int main(void) {
	int i = 0;
	struct student stu;		// 구조체 변수 선언.

	stu.no = "20101323";	// ERROR!
	stu.name = "Park";		// ERROR! no와 name은 배열의 이름 = 배열의 시작 주소.
							// 시작 주소에 문자열을 저장하려고 하니 에러가 발생하는 것임.
	printf("학번: %d, 이름: %s \n", stu.no, stu.name);

	return 0;
}