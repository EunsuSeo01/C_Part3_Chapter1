/*
 ������ ��� ����.
 last modified 2021-08-21
*/
#include <stdio.h>

// ������ ����. -> enum Ű���� ���.
enum week { ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN };	// �ʱ�ȭ X -> 0���� �ڵ������� ����.
enum season { SPRING, SUMMER = 2, FALL, WINTER };	// SUMMER���� �ʱ�ȭ ��.

int main(void) {
	enum week p1, p2, p3;	// ������ ���� ����.
	enum season s1, s2, s3, s4;		// ������ ���� ����.

	p1 = ONE;
	p2 = TWO;
	p3 = THREE;

	printf("%d %d %d \n", ONE, TWO, THREE);		// ������ ������ ��� ���.
	printf("%d %d %d \n", p1, p2, p3);			// ������ ���� ���.

	s1 = SPRING;
	s2 = SUMMER;
	s3 = FALL;
	s4 = WINTER;

	printf("%d %d %d %d \n", SPRING, SUMMER, FALL, WINTER);
	printf("%d %d %d %d \n", s1, s2, s3, s4);

	return 0;
}