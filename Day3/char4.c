//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char ch2;
//	
//	printf("대소문자 하나를 입력하세요. 종료하고 싶을때 0 입력");
//	while (1) {
//		scanf(" %c", &ch2);		// 문자열이 하나이므로 %c를 사용한다.
//		if (('A' <= ch2) && (ch2 <= 'Z')) {
//			printf("대문자: %c\n", ch2);
//		}
//		else if (('z' >= ch2) && (ch2 > 'Z')) {
//			printf("소문자: %c\n", ch2);
//		}
//		else if (ch2 == '0') {
//			printf("종료");
//				break;
//		}
//		else {
//			printf("잘못입력하셨습니다.");
//		}
//	}
//	return 0;
//}