﻿///*
//	(deep copy)복사생성자
//	동적할당 받은경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장이 되어야한다. 
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char* name;		
//	int age;
//public:
//	Person(const char* pname, int age) {
//		printf("Constructor Call!!!\n");
//		this->name = new char[strlen(pname) + 1];		// 동적할당 // 얕은 복사
//		strcpy(this->name, pname);						// this 맴버변수를 가르키는 것, pname 매개변수
//		this->age = age; 
//	}
//	~Person() {
//		delete[] name;
//	}
//	Person(const Person& other) {				// 입력받을시 상수 참조로 받아야한다. // 복사생성자
//		this->name = new char[strlen(other.name) + 1];		// 깊은 복사
//		printf("copy constructor!!\n");
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//	return 0;
//}
///*
//	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자,  복사생성자, 소멸자
//*/