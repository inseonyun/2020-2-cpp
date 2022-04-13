#include <iostream>
#include <stdlib.h>

enum season { SP, SM, FA, WI };

void main5() {
	enum season s;
	char sname[][7] = { "spring", "summer", "fall", "winter" };

	s = WI;

	printf(" %d번째 계절은 %s입니다.\n", s + 1, sname[s]);
}