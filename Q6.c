/*
 Part 3 Chapter 1 연습문제 6번 풀이.
 last modified 2021-08-21
*/
#include <stdio.h>

struct student {
	int no;
	char name[10];
	double height;
};

int main(void) {
	struct student stu = { 20101323, "Park", 160 };
	struct student* p = &stu;
	struct student** pp = &p;

	printf("%d %s %lf \n", stu.no, stu.name, stu.height);
	printf("%d %s %lf \n", p->no, p->name, p->height);
	printf("%d %s %lf \n", (*pp)->no, (*pp)->name, (*pp)->height);

	return 0;
}