/*
 ����ü�� ��� ������ �迭�� ����� �� ������ ���� �����ִ� ���� �ڵ�.
 last modified 2021-08-18
*/
#include <stdio.h>

struct student {
	char no[10];
	char name[20];		// ��� ������ �迭�� ����.
};

int main(void) {
	int i = 0;
	struct student stu;		// ����ü ���� ����.

	stu.no = "20101323";	// ERROR!
	stu.name = "Park";		// ERROR! no�� name�� �迭�� �̸� = �迭�� ���� �ּ�.
							// ���� �ּҿ� ���ڿ��� �����Ϸ��� �ϴ� ������ �߻��ϴ� ����.
	printf("�й�: %d, �̸�: %s \n", stu.no, stu.name);

	return 0;
}