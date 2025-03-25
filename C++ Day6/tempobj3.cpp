﻿/*

*/
#include <iostream>
using namespace std;

class MyClass {
	int num;
public:
	MyClass(int n) : num(n) { cout << this << ", " << num << " constructor" << endl; }
	MyClass(const MyClass& other) : num(other.num) { cout << this << " copy constructor" << endl; }
	~MyClass() { cout << this << ", " << num << " destructor" << endl; }
	void setData(int n) { num = n; }		// 매서드에서 콜론 초기화가 안됨
};
MyClass func(const MyClass aobj) {
	cout << "func()" << endl;
	return aobj;
}
int main()
{
	MyClass obj{ 10 };
	MyClass obj2{ func(obj) };
	cout << "bye~~" << endl;
	
	return 0;
}