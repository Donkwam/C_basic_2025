#include <stdio.h>

int main()
{
	char str[20];
	printf("문자열을 입력하세요: ");
	scanf_s("%s", str, sizeof(str));	// sizeof는 배열의 크기를 반환하는 연산자

	printf("입력한 문자열: %s\n", str);

	/*printf("char 크기: %d\n", sizeof(char));
	printf("정수 크기: %d\n", sizeof(int));
	printf("float 크기: %d\n", sizeof(float));
	printf("double 크기: %d\n", sizeof(double));*/		// 주석 지울때 Ctrl+K+C, 주석복구는 Ctrl+K+U

	return 0;	
}