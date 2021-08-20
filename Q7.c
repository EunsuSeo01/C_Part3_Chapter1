/*
 Part 3 Chapter 1 연습문제 7번 코드.
 last modified 2021-08-21
*/
#include <stdio.h>

struct node {
	int data;
	struct node* link;
};

int main(void) {
	struct node n1, n2, n3;

	n1.data = 10;
	n1.link = &n2;
	n2.data = 20;
	n2.link = &n1;
	n3.data = 30;
	n3.link = &n3;

	printf("%d %d %d \n", n1.data, n2.data, n3.data);
	printf("%d %d %d \n", n2.link->data, n1.link->data, n3.link->data);

	return 0;
}
