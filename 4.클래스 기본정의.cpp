#include <iostream>
using namespace std;

//클래스는 c에서의 구조체에 함수를 추가한 원리와 유사함

class Test    //클래스는 반환되는 자료형이 없음.
{
public:   //public 
	Test()
	{
		cout << "Test() 생성자 함수 실행" << endl;
	}

	void printInfo() {
		cout << "Test 클래스의 printInfo 실행" << endl;
	}
};

int main(void)
{
	cout << "main() 함수 실행" << endl;

	Test t;

	t.printInfo();
	return 0;
}
