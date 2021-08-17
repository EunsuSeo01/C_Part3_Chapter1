/*
 �ܺ� ���� ����ü�� ����ϴ� ����.
 last modified 2021-08-18
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct student {
	char name[20];
	struct point* link;		// �ܺ� ���� ����ü ������ ���� link ����.
};

int main(void) {
	// �� ����ü �������� ���� & �ʱ�ȭ.
	struct student stu1 = { "Kim", NULL };
	struct student stu2 = { "Lee", NULL };
	struct point p1 = { 30, 40 };
	struct point p2 = { 60, 80 };

	stu1.link = &p1;
	stu2.link = &p2;	// �ٸ� ����ü�� ������ �� �ְ� ��.

	printf("%s %d %d \n", stu1.name, stu1.link->x, stu1.link->y);
	printf("%s %d %d \n", stu2.name, stu2.link->x, stu2.link->y);
	printf("%d %d \n", sizeof(struct point), sizeof(struct student));	// �ñ��ؼ� �־ �ڵ�.

	return 0;
}