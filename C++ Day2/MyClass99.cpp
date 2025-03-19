///*
//	생성자를 만들어라
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	//char name[20];
//	char* name;
//	int age;
//public:
//	//MyClass() {}		// 디폴트 생성자
//	~MyClass() { delete[] name; }		// 소멸자(자동 호출된다 - 동적할당경우 말고는 별도로 작성할 필요가 없다.)
//	MyClass(int nu, const char* na, int ag);
//	void getData() const;
//};
//MyClass::MyClass(int nu, const char* na, int ag) {		
//	id = nu;
//	age = ag;
//	name = new char[strlen(na) + 1];		// 동적할당
//	// name = _name		// 배열을 선언한 후에 대입연산자를 사용하여 값을 직접할당할 수 없다.
//	strcpy(name, na);
//}
//void MyClass::getData() const {			// 상수 멤버함수(모든 멤버 값들을 상수화 시킨다.)
//	cout << "아이디: " << id << " 이름: " << name << " 나이: " << age << endl;
//
//}
//
//
//int main()
//{
//	//MyClass obj;
//	/*MyClass obj2(1, "김철수", 20);
//	obj2.getData();*/
//	MyClass obj(2, "김영희", 20);
//	obj.getData();
//	return 0;
//}