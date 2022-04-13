#include <iostream>
#include <stdlib.h>

typedef struct student {
	char name[10];
	int age;
}ST;

void main6() {
	ST m[3];	//구조체 배열 선언
	int cnt;

	//학생 3명의 성명, 나이 반복 입력
	for (cnt = 0; cnt < 3; cnt++) {
		printf("[%d번째 학생의 성명과 나이 입력]\n", cnt + 1);
		printf("성명 : ");
		scanf_s("%s", m[cnt].name, sizeof(m[cnt].name));
		printf("나이 : ");
		scanf_s("%d", &m[cnt].age);
		printf("\n");
	}
	printf("----------------------------------\n");

	for (cnt = 0; cnt < 3; cnt++) {
		printf("성명 :%10s, 나이 :%d\n", m[cnt].name, m[cnt].age);
	}
}