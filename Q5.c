/*
 Part 3 Chapter 1 연습문제 5번 코드.
 last modified 2021-08-21
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point array[2] = { 1, 1, 2, 2 };
	struct point* p = NULL;

	p = array;
	printf("%d %d \n", array[0].x, array[0].y);
	printf("%d %d \n", array[1].x, array[1].y);

	printf("%d %d \n", p[0].x, p[0].y);
	printf("%d %d \n", p[1].x, p[1].y);
	
	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (p + 1)->x, (p + 1)->y);

	return 0;
}