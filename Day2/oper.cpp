#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);
	printf("res : %d\n", res);		// 0은 거짓, 1은 참 , &&는 AND 연산자 둘다 참이여야함
	// 컴퓨터는 0을 기준으로 참과 거짓을 판단한다.
	res = (n < 10) || (n > 20);
	printf("res : %d\n", res);		// ||는 OR 연산자 둘중 하나만 참이여도 참임
	res = !(n >= 30);				// 복합 대입 연산자(+=, -=, *=, /=, %=), !는 부정 연산자
	printf("res : %d\n", res);		
	
	res = ~n;
	printf("res : %d\n", res);

	return 0;
}