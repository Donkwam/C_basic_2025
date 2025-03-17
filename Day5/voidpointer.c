///*
//	함수 포인터
//*/
//#include <stdio.h>
//
//int sum(int, int);
//int min(int, int);
//
//int main()
//{
//	int (*fp)(int, int); // 함수 포인터를 이용하여서 호출받는다.
//	int res;
//	//res = sum(20, 10);
//	//res = min(20, 10);
//	fp = sum;
//	res = fp(20, 10); 
//	printf("res: %d\n", res);
//	return 0;
//}
//
//int sum(int a, int b)
//{
//	int res = a + b;
//	return res;
//}
//
//int min(int a, int b)
//{
//	int res = a - b;
//	return res;
//}