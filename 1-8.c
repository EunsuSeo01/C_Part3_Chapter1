/*
 ��ø ����ü�� �ʱ�ȭ�ϴ� ����.
 last modified 2021-08-12
*/
#include <stdio.h>

struct score {
	double math;
	double english;
	double total;
};

struct student {
	int no;
	struct score s;		// ��ø ����ü.
};

int main(void) {
	struct student stu = { 202035340, {90, 80, 0} };	// ��ø ����ü�� �ʱ�ȭ.
	// struct student stu = { 202035340, 90, 80, 0 };	// ������ �߰�ȣ �����ص� �����ʹ� '�������' �����.

	stu.s.total = stu.s.math + stu.s.english;
	printf("�й� : %d \n", stu.no);
	printf("���� : %lf \n", stu.s.total);

	return 0;
}