/*
 ����ü ������ ���� �ּҿ� ����ü�� ù ��° ��� ������ �ּҰ� ������ ��Ÿ���� ���� �ڵ�.
 last modified 2021-08-18
*/
#include <stdio.h>

// ����ü ����.
struct point {
	int x;		// ����ü�� ù ��° ��� ����.
	int y;
};

int main(void) {
	struct point p1 = { 20, 30 };	// ����� ���ÿ� �ʱ�ȭ.
	printf("����ü ���� p1�� �ּ� : %x \n", &p1);
	printf("ù ��° ��� ���� p1.x�� �ּ� : %x \n", &p1.x);

	return 0;
}