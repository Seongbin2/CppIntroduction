#include <iostream>
using namespace std;


//참조자를 사용하면 변수의 원본 값에 접근 할 수 있다.
void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int num = 5;
	int& ref = num;  //ref변수를 참조자로 선언함.

	ref = 10; //참조자를 변경하면 원본값도 변경됨
	cout << num << endl; //10이 출력될 것임.

	int n = 10;
	int m = 20;
	swap(n, m);
	cout << n << endl << m << endl;
	//return을 사용하지 않았지만, n과 m의 값이 바꼈을 것이라고 추측할 수 있다.
}
