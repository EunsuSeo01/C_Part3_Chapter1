/*
 �Լ��� ��ȯ���� ����ü�� ����� ����. (����ü�� ���� ��ȯ)
 last modified 2021-08-20
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

// ��ȯ�� : struct point, �Ű�����: X.
struct point function(void);

int main(void) {
	struct point p;
	p = function();		// �Լ� ȣ��. -> ��ȯ���� struct point��
						// ��ȯ���� �޴� ������ struct point���̾�� ��.
	printf("%d %d \n", p.x, p.y);	// ����ü p�� call�� ��� ���������� �� ����� ����.

	return 0;
}

struct point function() {
	struct point call = { 10, 20 };		// ����ü �����, (�ּҰ� �ƴ� ���� ����Ǵ� �Ŷ� static���� ���� ���ص� ��.)
	return call;	// ��ȯ.
}