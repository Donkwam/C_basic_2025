/*
	템플릿 매개변수
*/
#include <iostream>

template <typename T, int sz>
class CTest {
ptivate:
	T ary[sz];
public:
	T& operator[](int idx) {
		if (idx < 0 || idx >= sz) {
			cout << "Error" << endl;
			exit(1):
		}
		return ary[idx];
	}
};

int main()
{

	return 0;
}