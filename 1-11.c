/*
 ����ü ������ �迭�� �����ϴ� ����.
 last modified 2021-08-17
*/
#include <stdio.h>

typedef struct student {
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
} STUDENT;

int main(void) {
	int i = 0;
	// ����ü ������ �迭�� �����ϰ� ���ÿ� �ʱ�ȭ.
	STUDENT stu[3] = {
		{ "20101323", "Park", 80, 80, 0 },
		{ "20101324", "Kim", 95, 85, 0 },
		{ "20101325", "Lee", 100, 90, 0 }
	};

	// �ݺ��� ���.
	// ����ü �迭�� . �����ڷ� ����ü ��� �����鿡 ������.
	for (; i < 3; i++) {
		stu[i].total = stu[i].math + stu[i].english;
		printf("�й�: %s, �̸�: %s \n", stu[i].no, stu[i].name);
		printf("����: %lf \n", stu[i].total);
		printf("\n");
	}

	return 0;
}