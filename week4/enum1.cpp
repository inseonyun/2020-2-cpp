#include <iostream>
#include <stdlib.h>

enum season { SP, SM, FA, WI };

void main5() {
	enum season s;
	char sname[][7] = { "spring", "summer", "fall", "winter" };

	s = WI;

	printf(" %d��° ������ %s�Դϴ�.\n", s + 1, sname[s]);
}