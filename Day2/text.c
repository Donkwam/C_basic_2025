//#include <stdio.h>
//
//// 함수 원형 선언
//int func(int a, int b, char c);
//
//int main()
//{
//    int a = 0, b = 0;
//    char c;
//
//    printf("계산기 프로그램입니다.\n");
//    printf("두 개의 정수를 입력하세요: ");
//    scanf_s("%d %d", &a, &b);
//
//    printf("연산자를 입력하세요 (+, -, *, /): ");
//    scanf_s(" %c", &c, 1);  // 공백 추가하여 개행 문자 문제 해결
//
//    int result = func(a, b, c);
//    printf("결과: %d\n", result);
//
//    return 0;
//}
//
//// 연산 함수 정의
//int func(int a, int b, char c) {
//    int res = 0;
//
//    if (c == '+')
//        res = a + b;
//    else if (c == '-')
//        res = a - b;
//    else if (c == '*')
//        res = a * b;
//    else if (c == '/') {
//        if (b == 0) {  // 0으로 나누는 경우 예외 처리
//            printf("오류: 0으로 나눌 수 없습니다.\n");
//            return 0;
//        }
//        res = a / b;
//    }
//    else {
//        printf("오류: 잘못된 연산자입니다.\n");
//        return 0;
//    }
//
//    return res;
//}