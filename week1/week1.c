#include <stdio.h>
#include <conio.h>

void quiz1() {
	int score[3];
	char name[3][10] = {"���� ����",
						"���� ����",
						"���� ����"
						};
	int n, i,j;

	for (i = 0; i < sizeof(score) / sizeof(int); i++) {
		printf("%s�� �Է��ϼ��� : ", name[i]);
		scanf_s("%d", &score[i]);
	}
	
	for (i = 0; i < sizeof(score) / sizeof(int); i++) {
		n = score[i] / 10;

		printf("[%s] ", name[i]);
		for (j = 0; j < n; j++) {
			printf("�� ");
		}
		printf("(%d��)\n", score[i]);
	}
	
}

void quiz2() {
	char s[50], cs[50];
	int num,i,j;
	
	for (; ; ) {
		printf("\n���ڿ��� �Է��ϼ��� : ");
		gets_s(s, 50);

		printf("\n1)\t���ڿ��� ��� �빮�ڷ� ����ϼ���.");
		printf("\n2)\t���ڿ��� ��� �ҹ��ڷ� ����ϼ���.");
		printf("\n3)\t���ڿ��� �Ųٷ� ����ϼ���.");
		printf("\n4)\t������ �״�� ����ϼ���.");
		printf("\n5)\t���α׷��� �����մϴ�.");
		printf("\n\n ��� �޴��� �����ϼ��� : ");
		scanf_s("%d", &num);
		while (getchar() != '\n');
		if (num == 1) {
			for (i = 0; i < strlen(s); i++) {
				cs[i] = toupper(s[i]);
			}
			cs[strlen(s)] = NULL;
			printf("���� �����ʹ� [%s]�̰�, [�빮��]�� [%s]�Դϴ�. \n", s, cs);
		}
		else if (num == 2) {
			for (i = 0; i < strlen(s); i++) {
				cs[i] = tolower(s[i]);
			}
			cs[strlen(s)] = NULL;
			printf("���� �����ʹ� [%s]�̰�, [�ҹ���]�� [%s]�Դϴ�. \n", s, cs);
		}
		else if (num == 3) {
			for (i = strlen(s)-1, j = 0; i >= 0; i--, j++) {
				cs[j] = s[i];
			}
			cs[strlen(s)] = NULL;
			printf("���� �����ʹ� [%s]�̰�, [�Ųٷ�]�� [%s]�Դϴ�. \n", s, cs);
		}
		else if (num == 4) {
			strcpy(cs, s);
			printf("���� �����ʹ� [%s]�̰�, [������]�� [%s]�Դϴ�. \n", s, cs);
		}
		else {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
	}
	

}
void main() {
	quiz2();
}