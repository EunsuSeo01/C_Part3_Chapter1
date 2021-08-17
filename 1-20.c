/*
 �ڱ� ���� ����ü�� ����ϴ� ����.
 last modified 2021-08-18
*/
#include <stdio.h>

// ����ü ������ �ڱ� �ڽ��� �����ϴ� �ڱ� ���� ����ü.
struct student {
	char name[20];
	int money;
	struct student* link;		// �ڱ� ���� ����ü ������ ���� link�� ����.
};

int main(void) {
	struct student stu1 = { "Kim", 90, NULL };
	struct student stu2 = { "Lee", 80, NULL };
	struct student stu3 = { "Goo", 60, NULL };

	stu1.link = &stu2;
	stu2.link = &stu3;		// ����ü ���� stu1, stu2, stu3��
							// �������� �ڱ� ���� ����ü ���� link�� ���� ���� ����Ǿ� ����.

	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.link->name, stu1.link->money);
	printf("%s %d \n", stu1.link->link->name, stu1.link->link->money);
	printf("%s %d \n", stu2.link->name, stu2.link->money);

	return 0;
}