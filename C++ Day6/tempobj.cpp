/*

*/
#include <iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		cout << num << "constructor" << endl;
	}
	~MyClass (){ cout << num << "destructor" << endl; }
};

int main()
{
	MyClass obj{ 10 };
	MyClass obj2 = MyClass{ 20 };
	MyClass{ 30 };						// 이름이 없는 임시 객체는 이름을 정해주지않으면 다음 명령어 전에 삭제된다.

	cout << "bye~~" << endl;
	return 0;
}