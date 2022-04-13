#include "week4.h"

int chk(struct student* p1, struct student* p2); //함수 원형

void main7() { 
	int result;
	struct student a = { 20175154, "윤인선", 23 };
	struct student b = { 20175154, "김길자", 25 };

	result = chk(&a, &b);

	if (result) {
		printf("학생 a와 학생 b는 동일한 학생입니다. \n");
	}
	else
		printf("학생 a와 학생 b는 서로 다른 학생입니다. \n");

}

int chk(struct student* p1, struct student* p2) { //사용자 정의 함수 정의
	if (p1->sno == p2->sno)
		return 1;
	else
		return 0;
}