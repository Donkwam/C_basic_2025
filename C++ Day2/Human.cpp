/*
	step1. 이름과 전화번호는 동적할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* p, int a, const char* pt) : age(a) { pname = new char[strlen(p) + 1]; strcpy(pname, p); 
	ptel = new char[strlen(pt) + 1]; strcpy(ptel, pt); }
	~Human() { delete[]pname; delete[]ptel; }
	
	void getData(){
		cout << "이름: " << pname << "  나이: " << age << "  전화번호: " << ptel << endl;
	}
};

int main()
{
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();

	return 0;
}