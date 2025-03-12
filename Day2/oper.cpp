//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() 
//{
//	int n = 30;
//	int res;
//
//	res = (n > 10) && (n < 20);
//	printf("res: %d\n", res);
//	res = (n > 10) || (n < 20);
//	printf("res: %d\n", res);
//	res = !(n >= 30);
//	printf("res: %d\n", res);
//	res = ~n;
//	printf("res: %d\n", res);
//
//	// 0000 ... 0001 1110 (30)
//	// 1111 ... 1110 0001 (~30)
//	// 2의 보수 해석
//	// 1111 ... 1110 0001 
//	// 1000 ... 0001 1110 (비트 반전)
//	// 1000 ... 0001 1111 (1을 더함 : -31)
//
//	res = n << 1;
//	printf("res: %x\n", res);
//	res = res >> 1;
//	printf("res: %x\n", res);
//
//	int n2 = 143;				// 0b 1000 1111
//	res = n2 << 1;				// 0b 1 0001 1110	// 286
//	printf("res: %x\n", res);
//	res = n2 >> 1;				// 0b 1100 0111		
//	printf("res: %x\n", res);
//	return 0;
//}