#include <iostream>
#include <cstring>
#include <string>

using namespace std;

double area(int r);

void quiz01() {
	std::cout << "Hello\n";
	std::cout << "ù ��° �������Դϴ�.";
}

double area(int r) {
	return 3.14 * r * r;
}
void quiz02() {
	int n = 5;
	char c = '*';
	std::cout << c << 7.5555 << '%' << n << "�̷��Ե� �˴ϴ�." << false << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "�������� " << n << "�� ���� ������ " << area(n);
}

void quiz03() {
	int width, height, area;

	cout << "�ʺ� �Է��ϼ��� : ";
	cin >> width;

	cout << "���̸� �Է��ϼ��� : ";
	cin >> height;

	area = width * height;

	cout << "�ش� �簢���� ������ : " << area << "�Դϴ�.\n";
}

void quiz04() {
	char name[11];

	cout << "�̸��� �Է��ϼ���(�ѱ��� 5����, ������ 10���� ���ڱ��� �Է� ����) : ";
	cin >> name;
	cout << "�̸��� : " << name << "�Դϴ�.\n";

}

void quiz05() {
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	
	while (true) {
		cout << "��ȣ : ";
		cin >> password;

		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���������� �����մϴ�." << endl;
			break;
		}
		else cout << "��ȣ�� Ʋ���ϴ�." << endl;
	}
}

void quiz06() {
	char address[100];
	
	cout << "�ּҸ� �Է��ϼ��� : ";
	cin.getline(address, 100, '\n');

	cout << "�ּҴ� " << address << "�Դϴ�.\n";
}

void quiz07() {
	string song("Dynamite");
	string two("BTS");
	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù���ڴ� " << two[0] << ")? : ";

	getline(cin, singer);
	if (singer == two)
		cout << "�����Դϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. ������ " + two + "�Դϴ�.\n";
}
void main() {
	quiz07();
}