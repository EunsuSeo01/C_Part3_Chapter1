/*
 ����ü ������ 1���� ������ ������ ����ϴ� ����� ����.
 last modified 2021-08-18
*/
#include <stdio.h>

struct student {
	char no[10];
	char name[20];
	double total;
};

int main(void) {
	struct student stu = { "20101323", "Park", 160 };	// ����ü ���� ���� & �ʱ�ȭ.
	struct student* p = NULL;	// 1���� ����ü ������ ���� p�� ����.

	p = &stu;	// struct student�� �����Ϳ��� struct student�� ������ �ּҸ� ���� ����!!
	// == ���� p�� ���� �ٸ� ����ü ���� stu�� '���� ������ ����'����.

	printf("%s %s %lf \n", stu.no, stu.name, stu.total);
	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);		// . �������� �켱 ������ * �������� �켱��������
																// ���Ƽ� *p�� ���� ó���ϱ� ���� ��ȣ�� ���� ��.
	printf("%s %s %lf \n", p->no, p->name, p->total);			// -> �����ڴ� ����ü ������ ���������� ��� ����.
																// ������ �����Ͱ� �;� ��. �����ͷθ� ��� ����.

	return 0;
}