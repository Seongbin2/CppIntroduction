#include <iostream>
using namespace std;

class test
{
	int data;
		                //public 멤버에 대한 모든 접근 허용
						//protected 멤버에 대한 모든 접근 차단 (다만, 상속관계에 있는 클래스의 접근은 허용)
						//private 멤버에 대한 모든 접근 차단 (default값임)

public:					//public 접근 제어 지시자이므로, 아래 두 함수는 메인함수에서 사용할 수 있음.
	int getdata(void) {
		return data;
	}
	void setdata(int user) {
		data = user;
	}

};

int main(void)
{
	test t;
	t.setdata(10);
	cout << t.getdata() << endl;
	//public 접근 제어 지시자 이므로, setdata(), getdata() 는 사용 가능하다.
	//cout << t.data << endl; 는 불가 (private 변수 이기때문)
	return 0;
}
