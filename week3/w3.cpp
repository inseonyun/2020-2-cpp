#include <iostream>

using namespace std;

void f01() {
	//5개의 실수를 입력받아 제일 큰 수 출력
	int i;
	double dou[5];
	double max = 0;

	cout << "5개의 실수를 입력하세요 : ";
	
	for (i = 0; i < sizeof(dou) / sizeof(double); i++) {
		cin >> dou[i];
		if (dou[i] > max)
			max = dou[i];
	}
	cout << "제일 큰 수는 " << max << "입니다.\n";
	
}

void f02() {
	/*엔터 키가 입력될 때까지 영문 문자열을 입력하고,
	 그 중 영문 's' or 'S'가 입력된 개수 출력*/
	char str[51];
	int i, count = 0;

	cout << "영문 문자열 입력(50자) : ";
	cin.getline(str, 51, '\n');

	for (i = 0; str[i]; i++) {
		if (str[i] == 's' || str[i] == 'S')
			count++;
	}
	cout << "입력된 s의 개수 : " << count;
}

void f03() {
	//3명의 이름을 '(쉼표),'로 구분하여 입력받아 출력하기
	char name[50];
	int i;

	cout << "3명의 이름을 입력하세요 : ";

	for (i = 0; i < 3; i++) {
		cin.getline(name, 50, ',');
		cout << i + 1 << ": " << name << endl;
	}
}

void f04() {
	//문자열을 입력받아 'hello' h, he, hel 같이 출력해라.
	char str[50];
	int i, j;
	
	cout << "문자열을 입력하세요 : ";
	cin >> str;

	for (i = 0; i < str[i]; i++) {
		for (j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << endl;
	}
}

void f05() {
	//문자열이 입력 돼있을 때, 모음의 개수 출력
	char str[50];
	char mc[5] = { 'A', 'E', 'I', 'O', 'U' };
	int count[5] = { 0, };
	int i, j;

	cout << "문자열을 입력하세요 : ";
	cin.getline(str, 50, '\n');

	for (i = 0; str[i]; i++) {
		if (str[i] == 'a' || str[i] == 'A')
			count[0]++;
		else if(str[i] == 'e' || str[i] == 'E')
			count[1]++;
		else if (str[i] == 'i' || str[i] == 'I')
			count[2]++;
		else if (str[i] == 'o' || str[i] == 'O')
			count[3]++;
		else if (str[i] == 'u' || str[i] == 'U')
			count[4]++;
	}
	for (i = 0; i < sizeof(count) / sizeof(int); i++) {
		cout << mc[i] << ": ";
		for (j = 0; j < count[i]; j++) {
			cout << "■";
		}
		cout << "(" << count[i] << ")\n";
	}
}