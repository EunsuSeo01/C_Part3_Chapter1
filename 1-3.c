/*
 ����ü ������ �ʱ�ȭ�� �����ִ� ����.
 last modified 2021-08-17
*/
#include <stdio.h>

struct point {
	int x, y;
};

int main(void) {
	struct point p1 = { 10, 20 };	// ����ü ������ �����ϴ� '���ÿ�' �ʱ�ȭ!
									// ����ü ������ ����� �ʱ�ȭ�� ���� �ϸ� ERROR.
	printf("x: %d, y: %d \n", p1.x, p1.y);

	return 0;
}