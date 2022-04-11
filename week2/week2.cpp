#include <iostream>
#include <cstring>
#include <string>

using namespace std;

double area(int r);

void quiz01() {
	std::cout << "Hello\n";
	std::cout << "첫 번째 맛보기입니다.";
}

double area(int r) {
	return 3.14 * r * r;
}
void quiz02() {
	int n = 5;
	char c = '*';
	std::cout << c << 7.5555 << '%' << n << "이렇게도 됩니다." << false << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "반지름이 " << n << "인 원의 면적은 " << area(n);
}

void quiz03() {
	int width, height, area;

	cout << "너비를 입력하세요 : ";
	cin >> width;

	cout << "높이를 입력하세요 : ";
	cin >> height;

	area = width * height;

	cout << "해당 사각형의 면적은 : " << area << "입니다.\n";
}

void quiz04() {
	char name[11];

	cout << "이름을 입력하세요(한글은 5글자, 영문은 10개의 문자까지 입력 가능) : ";
	cin >> name;
	cout << "이름은 : " << name << "입니다.\n";

}

void quiz05() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	
	while (true) {
		cout << "암호 : ";
		cin >> password;

		if (strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상적으로 종료합니다." << endl;
			break;
		}
		else cout << "암호가 틀립니다." << endl;
	}
}

void quiz06() {
	char address[100];
	
	cout << "주소를 입력하세요 : ";
	cin.getline(address, 100, '\n');

	cout << "주소는 " << address << "입니다.\n";
}

void quiz07() {
	string song("Dynamite");
	string two("BTS");
	string singer;

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫글자는 " << two[0] << ")? : ";

	getline(cin, singer);
	if (singer == two)
		cout << "정답입니다.";
	else
		cout << "틀렸습니다. 정답은 " + two + "입니다.\n";
}
void main() {
	quiz07();
}