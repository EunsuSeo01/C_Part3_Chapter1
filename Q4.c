/*
 Part 3 Chapter 1 �������� 4�� Ǯ��.
 last modified 2021-08-21
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point s1 = { 10, 10 };
	struct point* sp = &s1;

	printf("%d %d \n", s1.x, s1.y);
	printf("%x %x \n", &s1, sp);
	printf("%d %d \n", sp->x, sp->y);

	return 0;
}