/*
 typedef�� �̿��� ����ü�� �������ϴ� ����.
 last modified 2021-08-12
*/
#include <stdio.h>

// ����ü���� typedef�� ����ϴ� ��� 1. ����ü ���ǿ� ���ÿ� ����.
typedef struct score {
	double math;
	double english;
	double average;
} SCORE;

struct student {
	int no;
	SCORE s;		// struct score s;�� ����. �������� �̸� SCORE�� ���.
};
// ����ü���� typedef�� ����ϴ� ��� 2. ����ü ���ǿ� ���������� ����.
typedef struct student STUDENT;

int main(void) {
	STUDENT stu = { 202035340, { 90, 80, 0} };

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("�й� : %d \n", stu.no);
	printf("��� ���� : %lf \n", stu.s.average);

	return 0;
}