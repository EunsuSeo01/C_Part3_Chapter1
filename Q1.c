/*
 Part 3 Chapter 1 �������� 1,2�� Ǯ��.
 last modified 2021-08-21
*/
#include <stdio.h>

typedef struct student {
	int no;
	char bloodtype[10];
	double vision;
	int weight;
} STU;

int main(void) {
	STU stu[5];

	for (int i = 0; i < 5; i++) {
		printf("�л��� �й��� �Է��ϼ���. : ");
		scanf("%d", &stu[i].no);
		printf("�л��� �������� �Է��ϼ���. : ");
		scanf("%s", stu[i].bloodtype);
		printf("�л��� �÷��� �Է��ϼ���. : ");
		scanf("%lf", &stu[i].vision);
		printf("�л��� �����Ը� �Է��ϼ���. : ");
		scanf("%d", &stu[i].weight);
		printf("\n");
	}

	printf("          �й�  ������  �÷� ������\n");
	for (int i = 0; i < 5; i++) {
		printf("�л� %d : %d %s %lf %d \n", i + 1, stu[i].no, stu[i].bloodtype, stu[i].vision, stu[i].weight);
	}

	return 0;
}