/*
 ����ü ������ ũ��� ����ü ������ ũ�⸦ ���ϴ� ����.
 last modified 2021-08-20
*/
#include <stdio.h>

union point {	// ����ü ����. -> union Ű���� ���!
	int x;		// ��� ���� �� ���� ū �޸� ������ �����ϴ� �ڷ����� ũ���
	int y;		// �޸𸮰� ������. �� �޸𸮸� �ٸ� ������� �Բ� �����Ͽ� ���.
};

struct student {	// ����ü ����.
	int a;
	int b;
};

int main(void) {
	printf("����ü: %d, ����ü: %d \n", sizeof(union point), sizeof(struct student));

	return 0;
}