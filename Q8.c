/*
 Part 3 Chapter 1 연습문제 8번 풀이.
 last modified 2021-08-21
*/
#include <stdio.h>

struct student {
	char name[10];
	int score;
	struct student* left_link;
	struct student* right_link;
};

int main(void) {
	struct student stu2 = { "Lee", 80, NULL, NULL };
	struct student stu3 = { "Goo", 60, NULL, NULL };
	struct student stu1 = { "Kim", 90, &stu2, &stu3 };

	printf("stu1 %x : %s %d %x %x \n", &stu1, stu1.name, stu1.score, stu1.left_link, stu1.right_link);
	printf("stu2 %x : %s %d %x %x \n", &stu2, stu2.name, stu2.score, stu2.left_link, stu2.right_link);
	printf("stu3 %x : %s %d %x %x \n", &stu3, stu3.name, stu3.score, stu3.left_link, stu3.right_link);

	return 0;
}