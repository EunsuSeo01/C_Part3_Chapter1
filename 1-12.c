/*
 ����ü ������ �迭�� �����ϴ� ����.
 last modified 2021-08-18
*/
#include <stdio.h>

struct student {
	char no[10];
	char name[20];
	double total;
};

int main(void) {
	// ����ü �迭�� ����.
	struct student stu[3];
	int i = 0;

	for (; i < 3; i++) {
		printf("�й� �̸� ���� ������ �Է��ϼ��� : ");
		scanf("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);	// �迭 �̸��� ���� �ּҶ� & �� �ٿ��� ��.
	}
	printf("\n");

	printf("�л� ������ ����մϴ�.\n");
	for (i = 0; i < 3; i++) {
		printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}

	return 0;
}