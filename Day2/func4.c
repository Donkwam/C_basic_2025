/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int a, int b, char c);

int main()
{
	int a = 0, b = 0;
	char c;

	printf("계산기 프로그램입니다.\n");
	printf("두개의 정수를 입력하세요.");
	scanf_s("%d %d", &a, &b);

	getchar();

	printf("연산자를 입력하세요.");
	scanf("%c", &c);

	int result = func(a, b, c);
	printf("결과 : %d\n", result);

	return 0;
}

int func( int a, int b, char c) {

	if (c == '+')
		return  a + b;
	else if (c == '-')
		return  a - b;
	else if (c == '*')
		return  a * b;
	else if(c == '/')
		return  a / b;
}
