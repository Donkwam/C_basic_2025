﻿///*
//	이동생성자(T&&)
//	r-value reference를 파라미터로 받는생성자
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char name[20];
//	int age;
//public:
//	// 입력2개 받는 생성자
//	Human(const char* name, int age) {
//		printf("입력 2개 생성자 호출\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	// 복사생성자
//	Human(const Human& other) {
//		printf("복사 생성자 호출\n");
//		this->age = other.age;
//		strcpy(this->name, other.name);
//	}
//
//	// 이동생성자 - 원본객체에 있는 데이터를 이동하는 것이다.
//	Human(Human&& other) noexcept{		// noexcpet은 예외가 발생하지 않는다는 것을 의미한다.
//		printf("이동 생성자 호출\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//
//		//other.name = nullptr;
//		other.age = 0;
//	}
//	void printHuman() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Human h("홍길동", 30);
//	h.printHuman();
//
//	Human h2(h);
//	h2.printHuman();
//
//	Human h3(std::move(h));
//	h3.printHuman();
//	h.printHuman();
//	return 0;
//}