/*
 ��ø ����ü ���� ����.
 last modified 2021-08-12
*/
#include <stdio.h>

// ����ü ����.
struct score {
	double math, english, total;
};

// ����ü ����.
struct student {
	int no;
	struct score s;		// ����ü ���� s�� ����, s�� ����ü student�� ��� ������ ����.
};

int main(void) {
	struct student stu;

	stu.no = 20101323;
	stu.s.math = 90;		// . �����ڸ� 2�� ����Ͽ� ��ø ����ü�� ���� ����.
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("�й� : %d \n", stu.no);
	printf("���� : %lf \n", stu.s.total);

	return 0;
}

