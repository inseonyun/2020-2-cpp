#include <iostream>
#include <stdlib.h>

struct person {
	char name[10];
	char gender;
	int age;
};

void main3() {
	struct person p1 = { "ȫ�浿", 'M', 20 };
	struct person p2 = { "�����", 'W', 26 };
	printf("%8s%8s%8s \n", "����", "����", "����");
	printf("%8s%6c%10d \n", p1.name, p1.gender, p1.age);
	printf("%8s%6c%10d \n", p2.name, p2.gender, p2.age);
}