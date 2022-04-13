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
	strcpy_s(s.name, "윤인선");
	s.avg = 85.9;

	printf("학번 : %8d\n", s.num);
	printf("성명 : %10s\n", s.name);
	printf("점수 : %.2f\n", s.avg);

}