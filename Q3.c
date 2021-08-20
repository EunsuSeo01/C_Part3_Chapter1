/*
 Part 3 Chapter 1 연습문제 3번 코드.
 last modified 2021-08-21
*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point p;
	p.x = 3;
	p.y = 4;
	
	printf("%d %d \n", p.x, p.y);
	printf("%x %x %x \n", &p, &p.x, &p.y);

	return 0;
}