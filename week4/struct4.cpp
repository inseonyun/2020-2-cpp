#include <iostream>
#include <stdlib.h>

struct show {
	char name[10];
	int su;
	int price;
};

void main4() {
	struct show t = { "��ǻ��", 5, 780 };
	show* p;

	p = &t;

	printf(" 1.����ü ���� t�� ����Ͽ� ��� \n");
	printf("%6s %10s %14s\n", "ǰ��", "����", "�ݾ�(õ ��)");
	printf("%8s %6d %12d \n", t.name, t.su, t.price);

	printf("\n 2. ����ü ������ ���� *p�� ����Ͽ� ��� \n");
	printf("%6s %10s %14s\n", "ǰ��", "����", "�ݾ�(õ ��)");
	printf("%8s %6d %12d \n", (*p).name, (*p).su, (*p).price);

	printf("\n 3. ����ü ���� ��� ������ p -> p�� ����Ͽ� ��� \n");
	printf("%6s %10s %14s\n", "ǰ��", "����", "�ݾ�(õ ��)");
	printf("%8s %6d %12d \n", p->name, p->su, p->price);

}