/*
 Part 3 Chapter 1 �������� 9�� Ǯ��.
 last modified 2021-08-21
*/
#include <stdio.h>

struct node {
	int data;
	struct node* left_link;		// �ڱ� ���� ����ü ������ ����.
	struct node* right_link;
};

int main(void) {
	struct node node[7] = {
		{ 10, &node[1], &node[2] },
		{ 20, &node[3], &node[4] },
		{ 30, &node[5], &node[6] },
		{ 40, NULL, NULL },
		{ 50, NULL, NULL },
		{ 60, NULL, NULL },
		{ 70, NULL, NULL },
	};

	for (int i = 0; i < 7; i++) {
		printf("n%d node(�ּ�: %x) : %d %x %x \n", i + 1, &node[i], node[i].data, node[i].left_link, node[i].right_link);
	}

	return 0;
}