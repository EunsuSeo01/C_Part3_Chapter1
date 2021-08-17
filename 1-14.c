/*
 1-13 예제의 에러를 올바르게 수정한 예제 코드.
 last modified 2021-08-18
*/
#include <stdio.h>
#include <string.h>		// 이 헤더 파일을 추가해서 문자열 처리 함수를 사용할 수 있게 됨.

struct student {
	char no[10];
	char name[20];		// 멤버 변수로 배열을 선언.
};

int main(void) {
	int i = 0;
	struct student stu;

	/*
		구조체 멤버 변수로 문자열 배열을 사용할 때, 1-13과 같은 에러가 안 나려면
		1. 구조체 변수를 선언하고 '동시에 초기화'를 한다.
		2. 동시에 초기화 하지 않았으면, 따로 값을 저장해 줘야 하는데
		   이때 '함수를 사용'해서 문자열을 저장한다.
	*/

	strcpy(stu.no, "20101323");		// stu.no = "20101323";을 바르게 수정.
	strcpy(stu.name, "Park");		// stu.name = "Park";를 바르게 수정.
	printf("학번: %s, 이름: %s \n", stu.no, stu.name);

	return 0;
}