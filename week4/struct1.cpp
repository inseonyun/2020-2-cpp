#include <iostream>
#include <stdlib.h>

struct stud {
	int num;
	char name[10];
	double avg;
};

void main1() {
	stud s;
	
	s.num = 20175154;
	strcpy_s(s.name, "���μ�");
	s.avg = 85.9;

	printf("�й� : %8d\n", s.num);
	printf("���� : %10s\n", s.name);
	printf("���� : %.2f\n", s.avg);

}