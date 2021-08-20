/*
 열거형 사용 예제.
 last modified 2021-08-21
*/
#include <stdio.h>

// 열거형 정의. -> enum 키워드 사용.
enum week { ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN };	// 초기화 X -> 0부터 자동적으로 설정.
enum season { SPRING, SUMMER = 2, FALL, WINTER };	// SUMMER부터 초기화 됨.

int main(void) {
	enum week p1, p2, p3;	// 열거형 변수 선언.
	enum season s1, s2, s3, s4;		// 열거형 변수 선언.

	p1 = ONE;
	p2 = TWO;
	p3 = THREE;

	printf("%d %d %d \n", ONE, TWO, THREE);		// 열거형 데이터 상수 출력.
	printf("%d %d %d \n", p1, p2, p3);			// 열거형 변수 출력.

	s1 = SPRING;
	s2 = SUMMER;
	s3 = FALL;
	s4 = WINTER;

	printf("%d %d %d %d \n", SPRING, SUMMER, FALL, WINTER);
	printf("%d %d %d %d \n", s1, s2, s3, s4);

	return 0;
}