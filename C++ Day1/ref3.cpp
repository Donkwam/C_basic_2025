﻿///*
//	레퍼런스 - 선언과 동시에 초기화해야만 한다.
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num = 10, num2 = 100;
//	int& ref = num;			// num의 메모리 공간에 ref라는 별명이 붙는다.
//	int* pn = &num;			// 포인터 선언
//	int& rref = ref;
//	rref = num2;
//	cout << rref << ", " << num2 << endl;
//	//int& rref;			// 레퍼런스는 선언시에 같이 초기화 해야한다.
//	//rref = ref;
//
//	num++;
//	ref++;
//	(*pn)++;
//
//	cout << "num++: " << num << endl;
//	cout << "ref++: " << ref << endl;
//	cout << "*(pn)++: " << *pn << endl;
//
//	cout << "&num: " << &num << endl;
//	cout << "&ref: " << &ref << endl;
//
//	return 0;
//}