/*
 scanf() �Լ��� �̿��Ͽ� ����ü�� �����͸� �����ϴ� ����.
 last modified 2021-08-12
*/
#include <stdio.h>

// ����ü ����.
struct group {
	int a;		// ����ü ��� ���� ����.
	double b;
};

int main(void) {
	struct group g1;	// ����ü ���� ����. ���� �����ϴ� ��� �̿�.

	scanf("%d %lf", &g1.a, &g1.b);		// ������ �Է� �޾� ����.

	printf("g1.a�� �� : %d \n", g1.a);
	printf("g1.b�� �� : %lf \n", g1.b);

	return 0;
}