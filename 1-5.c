/*
 ����ü ������ ���縦 �����ִ� ����.
 last modified 2021-08-12
*/
#include <stdio.h>

struct point {
	int x, y;
};

int main(void) {
	struct point p1 = { 10, 20 };
	struct point p2 = { 0,0 };

	p2 = p1;	// ����ü ���� p1�� p2�� ����! -> ���� ����ü Ÿ�� struct point�ϱ� ����.

	printf("p1.x: %d, p1.y: %d \n", p1.x, p1.y);
	printf("p2.x: %d, p2.y: %d \n", p2.x, p2.y);

	return 0;
}