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

	printf("---------------------�й�, ����, ����, ����, ����---------------------\n");
	printf("�й� : ");
	scanf_s("%d", &s.num);
	printf("���� : ");
	scanf_s("%s", s.name, sizeof(s.name));
	printf("���� ���� : ");
	scanf_s("%d", &s.kor);
	printf("���� ���� : ");
	scanf_s("%d", &s.eng);
	printf("���� ���� : ");
	scanf_s("%d", &s.mat);

	sum = s.kor + s.eng + s.mat;
	s.avg = sum / 3.0;

	printf("�й� \t\t���� \t���� \t���� \t���� \t��� \n");
	printf("%d \t%s \t%d \t%d \t%d \t%.2f \n", s.num, s.name, s.kor, s.eng, s.mat, s.avg);

}