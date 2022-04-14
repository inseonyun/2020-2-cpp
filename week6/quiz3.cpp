#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;	//class ��� ���� x�� �Ű����� x�� ����
		this->y = y;	//class ��� ���� y�� �Ű����� y�� ����
	}
	void showPoint() {	//class ��� ���� x�� y ���
		cout << "(" << x << "," << y << ")" << endl;
	}
};
class ColorPoint : public Point {
	string color;

public:
	void setColor(string color) {	//class ��� ���� color�� �Ű����� color ����
		this->color = color;
	}
	void showColorPoint();			//�޼ҵ� �Լ� ����
};
void ColorPoint::showColorPoint() {	//�ܺο��� �޼ҵ� �Լ� ����
	cout << color << ":";			//�÷� ���
	showPoint();					//���� ����� Point�� ���⿡ point�� ��¹� ���
}

void main() {
	Point p;
	ColorPoint cp;

	p.set(10, 20);
	p.showPoint();

	cp.set(3, 4);					//��ü ������ �ٸ��Ƿ� ���� �ʱ�ȭ�� ����� ���ϴ� ���� ����
	cp.setColor("Red");
	cp.showColorPoint();
	
}