#include "week4.h"

int chk(struct student* p1, struct student* p2); //�Լ� ����

void main7() { 
	int result;
	struct student a = { 20175154, "���μ�", 23 };
	struct student b = { 20175154, "�����", 25 };

	result = chk(&a, &b);

	if (result) {
		printf("�л� a�� �л� b�� ������ �л��Դϴ�. \n");
	}
	else
		printf("�л� a�� �л� b�� ���� �ٸ� �л��Դϴ�. \n");

}

int chk(struct student* p1, struct student* p2) { //����� ���� �Լ� ����
	if (p1->sno == p2->sno)
		return 1;
	else
		return 0;
}