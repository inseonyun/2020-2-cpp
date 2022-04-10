#include <stdio.h>
#include <conio.h>

void quiz1() {
	int score[3];
	char name[3][10] = {"국어 성적",
						"영어 성적",
						"수학 성적"
						};
	int n, i,j;

	for (i = 0; i < sizeof(score) / sizeof(int); i++) {
		printf("%s을 입력하세요 : ", name[i]);
		scanf_s("%d", &score[i]);
	}
	
	for (i = 0; i < sizeof(score) / sizeof(int); i++) {
		n = score[i] / 10;

		printf("[%s] ", name[i]);
		for (j = 0; j < n; j++) {
			printf("■ ");
		}
		printf("(%d점)\n", score[i]);
	}
	
}

void quiz2() {
	char s[50], cs[50];
	int num,i,j;
	
	for (; ; ) {
		printf("\n문자열을 입력하세요 : ");
		gets_s(s, 50);

		printf("\n1)\t문자열을 모두 대문자로 출력하세요.");
		printf("\n2)\t문자열을 모두 소문자로 출력하세요.");
		printf("\n3)\t문자열을 거꾸로 출력하세요.");
		printf("\n4)\t원본을 그대로 출력하세요.");
		printf("\n5)\t프로그램을 종료합니다.");
		printf("\n\n 출력 메뉴를 선택하세요 : ");
		scanf_s("%d", &num);
		while (getchar() != '\n');
		if (num == 1) {
			for (i = 0; i < strlen(s); i++) {
				cs[i] = toupper(s[i]);
			}
			cs[strlen(s)] = NULL;
			printf("원본 데이터는 [%s]이고, [대문자]로 [%s]입니다. \n", s, cs);
		}
		else if (num == 2) {
			for (i = 0; i < strlen(s); i++) {
				cs[i] = tolower(s[i]);
			}
			cs[strlen(s)] = NULL;
			printf("원본 데이터는 [%s]이고, [소문자]로 [%s]입니다. \n", s, cs);
		}
		else if (num == 3) {
			for (i = strlen(s)-1, j = 0; i >= 0; i--, j++) {
				cs[j] = s[i];
			}
			cs[strlen(s)] = NULL;
			printf("원본 데이터는 [%s]이고, [거꾸로]로 [%s]입니다. \n", s, cs);
		}
		else if (num == 4) {
			strcpy(cs, s);
			printf("원본 데이터는 [%s]이고, [원본으]로 [%s]입니다. \n", s, cs);
		}
		else {
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}
	

}
void main() {
	quiz2();
}