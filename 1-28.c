/*
 ����ü�� �޸𸮸� ��� ����ϴ��� Ȯ���ϱ� ���� ����.
 last modified 2021-08-20
*/
#include <stdio.h>

union point {
	int x;
	int y;
};	// ������ �� ���� ū �ڷ����� int������ 4����Ʈ�� �޸� ������ �Ҵ��.

int main(void) {
	union point p;
	p.x = 10;

	printf("p.x: %d, p.y: %d \n", p.x, p.y);
	// 4����Ʈ �޸� ������ �����ؼ� ����ϱ� ������ p.x���� ����Ǹ� p.y���� �����!

	return 0;
}