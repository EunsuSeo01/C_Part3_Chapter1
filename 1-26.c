/*
 �Լ��� ��ȯ���� ����ü �������� ����� ����. (����ü�� �ּҸ� ��ȯ)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

// ��ȯ�� : ����ü ������, �Ű����� : X.
struct point* function(void);

int main(void) {
	struct point* p;	// ����ü ������ ���� p.
	p = function();		// p�� �ڷ��� == �Լ��� ��ȯ��.

	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (*p).x, (*p).y);		// ��ȯ���� call�� static ������ ���� ���� ���� �� ����.

	return 0;
}

struct point* function() {
	static struct point call = { 10, 20 };		// static�� �� ���̸� call�� ��������.
	// ���������� �Լ��� ����Ǹ� ������� p�� call�� '���� ������ �Ұ���'����.

	return &call;
}