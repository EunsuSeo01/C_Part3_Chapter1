/*
 ����ü ������ ����ü ��� ������ �����ϴ� ����.
 last modified 2021-08-12
*/
#include <stdio.h>

// ����ü ����.
struct group {
	int a;			// a,b : ����ü ��� ����.
	double b;
};

int main(void) {
	// ����ü ���� g1 ����.
	struct group g1;

	// ����ü ������ ����ü ��� ������ ����!
	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a�� �� : %d \n", g1.a);
	printf("g1.b�� �� : %lf \n", g1.b);

	return 0;
}