#include <iostream>
#include <stdlib.h>

struct show {
	char name[10];
	int su;
	int price;
};

void main4() {
	struct show t = { "컴퓨터", 5, 780 };
	show* p;

	p = &t;

	printf(" 1.구조체 변수 t를 사용하여 출력 \n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d \n", t.name, t.su, t.price);

	printf("\n 2. 구조체 포인터 변수 *p를 사용하여 출력 \n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d \n", (*p).name, (*p).su, (*p).price);

	printf("\n 3. 구조체 간접 멤버 연산자 p -> p를 사용하여 출력 \n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d \n", p->name, p->su, p->price);

}