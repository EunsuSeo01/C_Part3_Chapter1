/*
 2차원 구조체 포인터를 사용하는 예제.
 last modified 2021-08-18
*/
#include <stdio.h>

struct student {
	char no[10];
	char name[20];
	double total;
};

int main(void) {
	struct student stu = { "20101323", "Park", 160 };
	struct student* p = NULL;		// 1차원 구조체 포인터.
	struct student** pp = NULL;		// 2차원 구조체 포인터.

	p = &stu;
	pp = &p;

	printf("%s %s %lf \n", stu.no, stu.name, stu.total);

	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);		// *p == stu
	printf("%s %s %lf \n", p->no, p->name, p->total);

	printf("%s %s %lf \n", (**pp).no, (**pp).name, (**pp).total);	// *pp == p 라서 **pp == *p == stu
	printf("%s %s %lf \n", (*pp)->no, (*pp)->name, (*pp)->total);	// * . == ->

	return 0;
}