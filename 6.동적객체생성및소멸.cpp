#include <iostream>
using namespace std;

class test {

public:
	test() {
		cout << "test 객체 생성" << endl;
	}

	~test() {
		cout << "test 객체 소멸" << endl;
	}
};
int main(void)
{
	cout << "main 실행" << endl;
	test* t = new test[3];  //동적 객체 생성

	delete[] t; //배열로 생성한 객체는 반드시 배열로 삭제
	cout << "main 종료" << endl;
}
