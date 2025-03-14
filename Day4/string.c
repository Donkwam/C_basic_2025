///*
//	문자열
//*/
//#include <stdio.h>
//
//int main()
//{
//	char str[100] = "orange";	// 배열의 orange 각각 하나의 문자를 넣어놓은 것
//
//	printf("%s\n", str);
//	printf("%s\n", "orange");	// 읽을수 있는 메모리에 문자가 저장된 것
//	printf("%p\n", "orange");
//	printf("%c\n", *"orange");
//	printf("%c\n", *("orange" + 1));
//	printf("%c\n", "orange"[2]);
//
//	//"orange"[0] = 'O';	// 오류
//	//*"orange" = 'O';		// 오류
//	printf("%s\n", str);
//
//	return 0;
//}