#include <iostream>
#include <stdlib.h>

typedef struct student {
	char name[10];
	int age;
}ST;

void main6() {
	ST m[3];	//����ü �迭 ����
	int cnt;

	//�л� 3���� ����, ���� �ݺ� �Է�
	for (cnt = 0; cnt < 3; cnt++) {
		printf("[%d��° �л��� ����� ���� �Է�]\n", cnt + 1);
		printf("���� : ");
		scanf_s("%s", m[cnt].name, sizeof(m[cnt].name));
		printf("���� : ");
		scanf_s("%d", &m[cnt].age);
		printf("\n");
	}
	printf("----------------------------------\n");

	for (cnt = 0; cnt < 3; cnt++) {
		printf("���� :%10s, ���� :%d\n", m[cnt].name, m[cnt].age);
	}
}