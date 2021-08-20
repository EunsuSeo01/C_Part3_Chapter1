/*
 Part 3 Chapter 1 연습문제 10번 풀이.
 last modified 2021-08-21
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

void func1(struct point p);
void func2(struct point* p);

void main(void) {
	struct point p1 = { 10, 10 };
	struct point p2 = { 20, 20 };

	func1(p1);
	func2(&p2);
}

void func1(struct point p) {
	printf("%d %d \n", p.x, p.y);
}

void func2(struct point* p) {
	printf("%d %d \n", p->x, p->y);
}