/*
 �Լ��� �Ű������� ����ü ������ ������ ����ϴ� ����. (�ּҿ� ���� ȣ��)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

void function(struct point* call);

int main(void) {
	struct point p = { 10, 20 };
	function(&p);	// ����ü ������ �ּҸ� �Լ��� ���ڷ� ������.

	return 0;
}

// �Լ��� �Ű������� ����ü ������ �����̴�!
void function(struct point* call) {
	printf("%d %d \n", call->x, call->y);
	printf("%d %d \n", (*call).x, (*call).y);	// * . == ->
}