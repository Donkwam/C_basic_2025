﻿///*
//	출력인 경우: 레퍼런스
//*/
//#include <iostream>
//
//int& func(int& ref) {
//	ref++;
//	return ref;		// lvalue
//	//return ref++;		// rvalue
//}
//int main()
//{
//	int n = 10;
//	//int& ref = func(n);
//	int ref = func(n);
//	std::cout << ref << std::endl;
//	return 0;
//}