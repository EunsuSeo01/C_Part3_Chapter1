/*
 ��� ������ ������ �����͸� ����ϴ� ����� ����.
 last modified 2021-08-18
*/
#include <stdio.h>

struct point {
	int* x;
	int** y;
};

int main(void) {
	int num1 = 3;
	struct point p1;

	p1.x = &num1;	// 1���� �����Ϳ��� ������ �ּҸ� ����.
	p1.y = &p1.x;	// 2���� �����Ϳ��� 1���� �������� �ּҸ� ����,

	printf("%d %d %d \n", num1, *p1.x, **p1.y);

	return 0;
}