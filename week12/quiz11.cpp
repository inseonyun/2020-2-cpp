#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v; // 정수 벡터 생성

	cout << "5 개의 정수를 입력하세요 >> ";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		v.push_back(n); // 키보드에서 입력된 정수 n을 벡터에 저장
	}
	//v.begin()에서 v.end() 사이의 값을 오름차순 정렬
	//sort() 함수의 실행 결과 -> 벡터 v의 원소 순서가 변경됨
	sort(v.begin(), v.end()); // less<int>() 생략
	//원래의 함수 호출 -> sort(v.begin(), v.end(), less<int>()); 생략시 오름차순, 내림차순은 greater<int>()
	vector<int>::iterator it; // 백터 내의 원소를 탐색하는 iterator 변수 선언

	for (it = v.begin(); it != v.end(); it++) 
		cout << *it << ' ';
	cout << endl;
}