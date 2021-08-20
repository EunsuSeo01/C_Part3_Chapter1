/*
 Part 3 Chapter 1 연습문제 1,2번 풀이.
 last modified 2021-08-21
*/
#include <stdio.h>

typedef struct student {
	int no;
	char bloodtype[10];
	double vision;
	int weight;
} STU;

int main(void) {
	STU stu[5];

	for (int i = 0; i < 5; i++) {
		printf("학생의 학번을 입력하세요. : ");
		scanf("%d", &stu[i].no);
		printf("학생의 혈액형을 입력하세요. : ");
		scanf("%s", stu[i].bloodtype);
		printf("학생의 시력을 입력하세요. : ");
		scanf("%lf", &stu[i].vision);
		printf("학생의 몸무게를 입력하세요. : ");
		scanf("%d", &stu[i].weight);
		printf("\n");
	}

	printf("          학번  혈액형  시력 몸무게\n");
	for (int i = 0; i < 5; i++) {
		printf("학생 %d : %d %s %lf %d \n", i + 1, stu[i].no, stu[i].bloodtype, stu[i].vision, stu[i].weight);
	}

	return 0;
}