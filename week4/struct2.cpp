#include <iostream>
#include <stdlib.h>

struct student {
	int num;
	char name[10];
	int kor;
	int eng;
	int mat;
	double avg;
};

void main2() {
	struct student s;
	int cnt, sum;

	printf("---------------------학번, 성명, 국어, 영어, 수학---------------------\n");
	printf("학번 : ");
	scanf_s("%d", &s.num);
	printf("성명 : ");
	scanf_s("%s", s.name, sizeof(s.name));
	printf("국어 점수 : ");
	scanf_s("%d", &s.kor);
	printf("영어 점수 : ");
	scanf_s("%d", &s.eng);
	printf("수학 점수 : ");
	scanf_s("%d", &s.mat);

	sum = s.kor + s.eng + s.mat;
	s.avg = sum / 3.0;

	printf("학번 \t\t성명 \t국어 \t영어 \t수학 \t평균 \n");
	printf("%d \t%s \t%d \t%d \t%d \t%.2f \n", s.num, s.name, s.kor, s.eng, s.mat, s.avg);

}