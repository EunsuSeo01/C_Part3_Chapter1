/*
 �Լ��� �Ű������� ����ü ������ ����ϴ� ����. (���� ���� ȣ��)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void function(struct point call);

int main(void) {
	struct point p = { 10, 20 };
	function(p);	// ����ü ���� p�� ���� �Լ��� ȣ��.

	return 0;
}

// �Լ��� �Ű������� ����ü ����.
void function(struct point call) {	// call�� p�� �����.
	printf("%d %d \n", call.x, call.y);
}