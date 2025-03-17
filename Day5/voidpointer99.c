//#include <stdio.h>
//void func(int(*fp)(int, int));
//
//int main()
//{
//	char a;
//	int c, d;
//	printf("연산할 두 값을 입력하세요.");
//	scanf("숫자 두개 입력하세요: %d %d", &c, &d);
//    scanf("연산 방법을 적으세요: %s", &a);
//	
//    int result = func(int(*fp)(int, int));
//    printf("결과: %d\n", result);
//
//	return 0;
//}
//
//void func(int(*fp)(int, int))
//{
//    switch (fp) {
//        case '+': return a + b;
//        case '-': return a - b;
//        case '*': return a * b;
//        case '/':
//            if (b != 0) return a / b;
//            else {
//                printf("오류: 0으로 나눌 수 없습니다.\n");
//                return 0;
//            }
//        default:
//            printf("오류: 지원하지 않는 연산자입니다.\n");
//            return 0;
//    }
//}