/*
 ����ü ������ ���� ���� ������ �ϴ� ����. -> ����, ����, ����, �������� ���� ������ �Ұ���!
 last modified 2021-08-12
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point p1 = { 10, 20 };
	struct point p2 = { 0, 0 };
	struct point p3 = { 0, 0 };

	// p3 = p2 + p1;	���� �߻�! ����ü ������ '����� ���� �ڷ���'�̶� ��Ģ������ �Ұ�.
	// p3 = p2 - p1;	������ '���� ����'�� ������.

	return 0;
}