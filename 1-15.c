/*
 ��� ������ 1���� �����͸� ����ϴ� ����� ����.
 last modified 2021-08-18
*/
#include <stdio.h>

struct point {
	int* x;		// ����ü�� ��� ������ 1���� �����͸� ����.
	int* y;		// x,y�� int�� 1���� ������ -> int�� ������ �ּҸ� ������ �� ����.
};
typedef struct point P;		// typedef �Ἥ ����ü�� ������.

int main() {
	int num1 = 4;
	int num2 = 5;
	P p1;

	p1.x = &num1;
	p1.y = &num2;

	printf("%d %d \n", num1, num2);
	printf("%d %d \n", *p1.x, *p1.y);

	return 0;
}