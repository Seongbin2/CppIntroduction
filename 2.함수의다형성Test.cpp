#include <iostream>
using namespace std;    //std 네임스페이스를 전역 범위에서 사용

//C++에서는 함수의 다형성을 지원함.

int Add(int a, int b)
{
	return a + b;
}

int Add(int a, int b, int c)
{
	return a + b + c;
}

double Add(double a, double b)
{
	return a + b;
}

int main(void)
{
	cout << Add(1, 4) << endl;
	cout << Add(2, 5, 6) << endl;
	cout << Add(2.5, 3, 52) << endl;
}
